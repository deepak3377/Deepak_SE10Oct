#normal fuction with normal perameters
def sum(n1,n2):
    ans = n1+n2
    print(ans)
sum(10,20) 
#args function
def addition(*n):
    ans = 0
    for i in n:
        ans +=i
    print(ans)

addition(76,54,98,507)  

def myfun(**kwrgs):
    for k,v in kwrgs.items():
        print(f"{k} = {v}")

myfun(name="deepak",subject="pythone") 
