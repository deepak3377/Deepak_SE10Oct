num=int(input("Enter Number : "))
factorial =1
if num < 0:
    print("Factorial Dose Not Exist For Negative Numbers")
elif num == 0:
    print("The Factorial o Is 1")
else:
    for i in range(1,num + 1):
        factorial = factorial*i
    print("The Factorial Of",num,"Is",factorial)            