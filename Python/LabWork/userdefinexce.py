# user defined exception

# create class inheriate

# user defined exception

class OddException(Exception):
    pass


#main program executation

#accept number from user

num = int(input("Enter Number : "))

try:
    #check condition
    if num%2==0:
        print("Even Number")
    else:
        #rise exception
        raise OddException
except OddException:
    print("We can't accept the odd number")
