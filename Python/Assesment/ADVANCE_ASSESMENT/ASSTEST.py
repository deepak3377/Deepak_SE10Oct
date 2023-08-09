from tkinter import Tk, Label, Entry, Button, messagebox, simpledialog
from tkinter import messagebox
import mysql.connector

class Database:
    def __init__(self):
        self.connection = mysql.connector.connect(
            host='localhost',
            user='root',
            password='',
            database='pro_m'
        )
        self.cursor = self.connection.cursor()
        self.create_tables()

    def execute_query(self, query, params=None):
        self.cursor.execute(query, params)
        self.connection.commit()

    def execute_select_query(self, query, params=None):
        self.cursor.execute(query, params)
        result = self.cursor.fetchall()
        return result

    def create_tables(self):
        self.execute_query("CREATE TABLE IF NOT EXISTS users (id INT AUTO_INCREMENT PRIMARY KEY, username VARCHAR(255), password VARCHAR(255), role ENUM('product_manager', 'customer'))")
        self.execute_query("CREATE TABLE IF NOT EXISTS products (id INT AUTO_INCREMENT PRIMARY KEY, name VARCHAR(255), stock INT)")

class ProductManager:
    def __init__(self):
        self.database = Database()

    def register(self, username, password):
        self.database.execute_query("INSERT INTO users (username, password, role) VALUES (%s, %s, 'product_manager')", (username, password))

    def login(self, username, password):
        result = self.database.execute_select_query("SELECT * FROM users WHERE username = %s AND password = %s AND role = 'product_manager'", (username, password))
        return True if result else False

    def add_product(self, name, stock):
        self.database.execute_query("INSERT INTO products (name, stock) VALUES (%s, %s)", (name, stock))

    def view_products(self):
        result = self.database.execute_select_query("SELECT * FROM products")
        return result

class Customer:
    def __init__(self):
        self.database = Database()

    def register(self, username, password):
        self.database.execute_query("INSERT INTO users (username, password, role) VALUES (%s, %s, 'customer')", (username, password))

    def login(self, username, password):
        result = self.database.execute_select_query("SELECT * FROM users WHERE username = %s AND password = %s AND role = 'customer'", (username, password))
        return True if result else False

    def purchase_product(self, product_id):
        product = self.database.execute_select_query("SELECT * FROM products WHERE id = %s", (product_id,))
        if product:
            stock = product[0][2]
            if stock > 0:
                self.database.execute_query("UPDATE products SET stock = stock - 1 WHERE id = %s", (product_id,))
                self.database.execute_query("INSERT INTO orders (product_id) VALUES (%s)", (product_id,))
                return True
        return False

    def view_orders(self):
        result = self.database.execute_select_query("SELECT o.id, p.name FROM orders o JOIN products p ON o.product_id = p.id")
        return result

class ProductManagerApp:
    def __init__(self):
        self.root = Tk()
        self.root.title("Product Manager")
        self.root.geometry("500x250")

        self.product_manager = ProductManager()

        self.username_label = Label(self.root, text="Username:")
        self.username_label.pack()
        self.username_entry = Entry(self.root)
        self.username_entry.pack()

        self.password_label = Label(self.root, text="Password:")
        self.password_label.pack()
        self.password_entry = Entry(self.root, show="*")
        self.password_entry.pack()

        self.login_button = Button(self.root, text="Login", command=self.login)
        self.login_button.pack()

        self.register_button = Button(self.root, text="Register", command=self.register)
        self.register_button.pack()

        self.add_product_button = Button(self.root, text="Add Product", command=self.add_product)
        self.add_product_button.pack()

        self.view_products_button = Button(self.root, text="View Products", command=self.view_products)
        self.view_products_button.pack()

        self.root.mainloop()

    def register(self):
        username = self.username_entry.get()
        password = self.password_entry.get()

        if username and password:
            self.product_manager.register(username, password)
            messagebox.showinfo("Success", "Registration successful!")
        else:
            messagebox.showerror("Error", "Please enter username and password.")

    def login(self):
        username = self.username_entry.get()
        password = self.password_entry.get()

        if username and password:
            if self.product_manager.login(username, password):
                messagebox.showinfo("Success", "Login successful!")
            else:
                messagebox.showerror("Error", "Invalid username or password.")
        else:
            messagebox.showerror("Error", "Please enter username and password.")

    def add_product(self):
        product_name = simpledialog.askstring("Add Product", "Enter product name:")
        product_stock = simpledialog.askinteger("Add Product", "Enter product stock:")

        if product_name and product_stock:
            self.product_manager.add_product(product_name, product_stock)
            messagebox.showinfo("Success", "Product added successfully!")
        else:
            messagebox.showerror("Error", "Please enter product name and stock.")

    def view_products(self):
        products = self.product_manager.view_products()
        if products:
            messagebox.showinfo("Products", "\n".join([f"{product[0]} - {product[1]} - Stock: {product[2]}" for product in products]))
        else:
            messagebox.showinfo("Products", "No products available.")


class CustomerApp:
    def __init__(self):
        self.root = Tk()
        self.root.title("Customer")
        self.root.geometry("300x250")

        self.customer = Customer()

        self.username_label = Label(self.root, text="Username:")
        self.username_label.pack()
        self.username_entry = Entry(self.root)
        self.username_entry.pack()

        self.password_label = Label(self.root, text="Password:")
        self.password_label.pack()
        self.password_entry = Entry(self.root, show="*")
        self.password_entry.pack()

        self.login_button = Button(self.root, text="Login", command=self.login)
        self.login_button.pack()

        self.register_button = Button(self.root, text="Register", command=self.register)
        self.register_button.pack()

        self.purchase_button = Button(self.root, text="Purchase Product", command=self.purchase_product)
        self.purchase_button.pack()

        self.view_orders_button = Button(self.root, text="View Orders", command=self.view_orders)
        self.view_orders_button.pack()

        self.root.mainloop()

    def register(self):
        username = self.username_entry.get()
        password = self.password_entry.get()

        if username and password:
            self.customer.register(username, password)
            messagebox.showinfo("Success", "Registration successful!")
        else:
            messagebox.showerror("Error", "Please enter username and password.")

    def login(self):
        username = self.username_entry.get()
        password = self.password_entry.get()

        if username and password:
            if self.customer.login(username, password):
                messagebox.showinfo("Success", "Login successful!")
            else:
                messagebox.showerror("Error", "Invalid username or password.")
        else:
            messagebox.showerror("Error", "Please enter username and password.")

    def purchase_product(self):
        product_id = simpledialog.askinteger("Purchase Product", "Enter product ID:")
        if product_id:
            if self.customer.purchase_product(product_id):
                messagebox.showinfo("Success", "Product purchased successfully!")
            else:
                messagebox.showerror("Error", "Invalid product ID or stock not available.")
        else:
            messagebox.showerror("Error", "Please enter product ID.")

    def view_orders(self):
        orders = self.customer.view_orders()
        if orders:
            messagebox.showinfo("Orders", "\n".join([f"Order ID: {order[0]}, Product Name: {order[1]}" for order in orders]))
        else:
            messagebox.showinfo("Orders", "No orders available.")


def main():
    role = simpledialog.askstring("Role Selection", "Enter your role (product_manager/customer):")
    if role == "product_manager":
        ProductManagerApp()
    elif role == "customer":
        CustomerApp()
    else:
        messagebox.showerror("Error", "Invalid role entered.")

if __name__ == "__main__":
    main()
