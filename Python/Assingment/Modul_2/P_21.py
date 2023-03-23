def revers_string():
    str1 = input("Enter String : ")
    if len(str1) % 4==0:
        print (''.join(reversed(str1)))
    return str1

revers_string()

