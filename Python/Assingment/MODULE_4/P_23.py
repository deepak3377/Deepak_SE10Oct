class Rectangel:
    l = int(input("Enter Length : "))
    w = int(input("Enter Width : "))

    def area(self):
            a = self.l * self.w
            print("Area of Rectangle : ",a)


obj = Rectangel()
obj.area()