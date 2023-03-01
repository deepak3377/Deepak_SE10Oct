roll = int(input("Enter Your Roll NO :"))
name = (input("Enter Your Name :"))
p = int(input("Enter Physics Marks :"))
c = int(input("Enter Chemistry Marks :"))
m = int(input("Enter Maths Marks :"))
total = (p+c+m)
per = (total/3)

print("*"*80)
print()
print("Roll No : ",roll)
print("Name : ",name)
print("Total : ",total)
print("Percentage : ",per)

if per>=75:
    print("Class Is Distinction")
elif per>=60:
    print("First Class")
elif per>=50:
    print("Second Class")
elif per>=40:
    print("Pass Class")
else:
    print("Fail!")
    
    
