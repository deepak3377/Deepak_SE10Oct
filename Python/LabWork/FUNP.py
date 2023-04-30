db = {} 

def registration(firstname,email,password):
    db['name']=firstname
    db['email']= email
    db['password']= password
    print("Registration successfully")


def login(email,password):
    if email == db['email']:
        if password == db['password']:
         return db['name']
        
        else:
            return "invailid email or password"
    else:
        return "invailid demail or password"

status = True
while status:

    menu = """"

            1)press 1 for registration
            2)press 2 for login 
            3)press 3 for exit
        """        
    print(menu)

    choice = int(input("Enter your choice : "))
    if choice == 1 :
        name = input("enter name : ")
        email = input("Enter your email : ")
        password = input("Enter password : ")

        registration(login(name,email,password))

    elif choice==2:
        name = input("enter name : ")
        password = input("Enter password : ")
        print(login(email,password))

    elif choice == 3:
        status = False    
