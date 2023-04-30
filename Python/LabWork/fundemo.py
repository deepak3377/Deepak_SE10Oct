"""def myfun():
    print("hello")
    print("Welcome to python")


myfun()     


def greetings():
    msg = input("Enter your msg : ")
    print(msg)

greetings()
"""
def addition():
    num1 = int(input("Enter number 1 : "))
    num2 = int(input("Enter number 2 :"))
    ans = num1 + num2
    print(ans)

def mul():
    num1 = int(input("Enter number 1 : "))
    num2 = int(input("Enter number 2 :"))
    ans = num1 * num2
    print(ans)  

def menu():
    data =   """"  
                    menu
                         Press 1 for addition 
                         press 2 for Multiplication

                         """
    print(data)
    choice = int(input("Enter Your Choice : "))
    if choice ==1:
        addition()
    elif choice ==2:
        mul()

menu()            