a = input("Enter a string : ")

if len(a) > 1:
    print(a[:2]+a[-2:])
else:
    print("Empty string")    