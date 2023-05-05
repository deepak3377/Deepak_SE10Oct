class circle():
    def __init__(self,r):
        self.radius = r

    def area(self):
        return self.radius**2*3.14

    def p(self):
        return 2*self.radius*3.14

ncircle = circle(10)

print(ncircle.area())
print(ncircle.p())