import random
computer = random.randint(1,100)

status = True

while status:
    user = int(input("Enter a number : "))
    if user>computer:
        print("HINT : Guess lower number")
    elif user<computer:
        print("HINT : Guess higher number")
    else:
        print("YOU WON!!!")
        status = False
        