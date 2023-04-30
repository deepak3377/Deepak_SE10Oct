#parent class
class A:
    def displayA(self):
        self.num1 = 10

#parent class
class B:
    def displayB(self):
        self.num2 = 20

#mutiple inheritance 

class C(A,B):
    def displayRes(self):
        ans = self.num1 + self.num2
        print("num1 = ",self.num1)
        print("num2 = ",self.num2)
        print("ans = ",ans)

obj = C()
obj.displayA()
obj.displayB()
obj.displayRes()       