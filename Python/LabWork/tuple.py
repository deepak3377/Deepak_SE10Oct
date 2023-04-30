"""t = (10,12,24)
print(type(t))
print(t)

t= ("Python","java","fluter","React")
print(t)
for item in t:
    print(item)

t= ("Python","java","fluter","React")
print(t)
for item in t:
    print(item,end=',') 
print(len(t))    

t= ("Python","java","fluter","React")
print(t.count("java"))
"""

t= ("Python","java","flutter","React")

l1=list(t) #castin into list
l1[0] = "php"

t=tuple(l1)# recastin into tuple
print(t)