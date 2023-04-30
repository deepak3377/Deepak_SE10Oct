"""
import math
#factorial num

#5 = 120

#5 : 5*4*3*2*1

#take one varible which contain 1 value

f=1

#accept number from user

num=int(input("Enter num : "))

#continous multipal values with one values

for i in range(1,num+1):
    f*= i

print(f)   


import math

#accept number from user

num = int(input("Enter num : "))

f=math.factorial(num) 

print(f)


import math

print(math.sqrt(64))
print(math.pow(2,5))
print(math.pi)
print(math.ceil(76,67))
print(math.floor(75,67))



from datetime import date

mydate = date(2023,3,22)

print("Date is :",mydate)

current_date = date.today()

print("current Date : ",current_date)
print(current_date.year)
print(current_date.day)
print(current_date.month)

#use for time 
from datetime import time

t = time(10,3,16)
print(t)

"""

import random
n = random.randint(1,10)
print(n)

subject= ["c","c++","java","python"]
