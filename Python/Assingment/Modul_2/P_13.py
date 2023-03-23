a = input("Enter String : ")

all_strr ={}
for i in a:
    if i in all_strr:
        all_strr[i] += 1
    else:
        all_strr[i] = 1

print("count of all character in",a,str(all_strr))