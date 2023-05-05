f = open('myfile.txt',"r")
c = len(f.readlines())
print("The Number of lines are : ",c)
f.close()