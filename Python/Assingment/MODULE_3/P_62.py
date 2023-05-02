pi=22/7
height = float(input('Height of cylinder: '))
r = float(input('Radius of cylinder: '))
volume = pi * r * r * height
area = ((2*pi*r) * height) + ((pi*r**2)*2)
print("Volume is: ", volume)
print("Surface Area is: ",area)
