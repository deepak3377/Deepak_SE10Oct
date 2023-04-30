class A:
    def displayA(self):
        self.num1 = 10

class B(A):
    def displayB(self):
        self.num2 = 20

class C(A):
    def displayC(self):
        self.num3 = 30

class D(B,C):
    def displayre(self):
        ans = self.num1 + self.num2 + self.num3


obj = D()
obj.displayA()
obj.displayB()
obj.displayC()
obj.displayre()

