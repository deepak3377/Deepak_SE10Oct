n = int(input("Enter No :"))
evensum=0
oddsum=0

for i in range (1,n+1):
  if i%2==0:
     print("Even : ",i)
     evensum=evensum+i
  else:
      print("Odd : ",i)
      oddsum=oddsum+i
print("Sum Of Even Noc : ",evensum)
print("Sum Of Odd Noc : ",oddsum)
      
