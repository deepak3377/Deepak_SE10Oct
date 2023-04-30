"""
type of inheritance

1) single level inheritance
2) multi level inheritance

"""

class GrandParent:
    def land(self):
        print("land in gujarat")

class Parent(GrandParent):
    def house(self):
        print("HOME AT AHMEDABAD")

class Child(Parent):
    def car(self):
        print("PURCHECE OWN CAR")
        
        
obj = Child()
obj.land
obj.house
obj.car                        