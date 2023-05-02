a = [5,6,3,31,2,9]

sublist = [4,21,10,10]

v = 0

res = "True"

for i in sublist:
    if i in a:
        v+=1
if(v==len(sublist)):
    res


print("sublist in ",res)    
