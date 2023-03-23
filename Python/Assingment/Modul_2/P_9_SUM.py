def sum_three(a,b,c):

    if a == b or b == c or a==c:
        sum = 0
    else:
     sum = a + b + c
     return sum
print(sum_three(2, 1, 2))
print(sum_three(3, 2, 2))
print(sum_three(2, 2, 2))
print(sum_three(1, 2, 3))   
