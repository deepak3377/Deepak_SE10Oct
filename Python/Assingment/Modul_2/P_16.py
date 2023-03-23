string=input("Enter String : ")
a = dict()
txt = string.split(" ")
for t in txt:
    if t in a:
        a[t] +=1
    else:
        a[t] =1
print(a)   