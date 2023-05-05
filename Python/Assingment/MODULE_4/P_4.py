n = int(input("Enter lines : "))
f = open("myfile.txt","r")

for i in range(n):
    print(f.readline())