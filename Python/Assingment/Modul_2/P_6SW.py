#with temp
"""
a = int(input("Enter A : "))
b = int(input("Enter B : "))

temp = a

a = b
b = temp

print("The Value Of A after Swapping : ",a)
print("The Value Of B after Swapping : ",b)
"""
#without temp 
a = int(input("Enter A : "))
b = int(input("Enter B : "))


a,b=b,a

print("The Value Of A after Swapping : ",a)
print("The Value Of B after Swapping : ",b)