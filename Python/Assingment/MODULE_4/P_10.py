f = open("myfile.txt",'r')
c = f.read()
w = c.split()

print("Number of words : ",len(w))
f.close