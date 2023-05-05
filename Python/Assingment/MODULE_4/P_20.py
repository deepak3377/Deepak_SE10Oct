number = int(input("Enter number : "))
try:

    if(number%2!=0):
        print("Odd Number")
    else:
        raise ValueError    
except:
    print("only odd numbers vailid")