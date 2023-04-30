l=[1,2,3,1.1,2.2,3.3,"Python",0,False,True,0,"tops",1,2]
print(l)
l.append(100)
print(l)

l1 = l.copy()
print(l1)

l2 = l.copy()
print(l2)

l1.append(200)
print(l1)

l2.append(300)
print(l2)

print(l.count(0))
print(l.count(1))

l.pop()
print(l)

l.pop()
print(l)

l3 = [1001,1002,1003]
l.extend(l3)
print(l)

print(l.index(1001))
l.insert(6,"Deepak")
print(l)
l.remove(1.1)
print(l)
l.reverse()
print(l)




