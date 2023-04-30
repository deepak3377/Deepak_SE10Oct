"""
inheritance : one class derived propertis of another class

why we use inheritance:
    in
"""

class Parent:
    def home(self):
        print("AHMEDABAD")

class Child(Parent): #inheritance
    def car(self):
        print("I HAVE CAR")

#object declaration 
obj = Child()
obj.home
obj.car        
