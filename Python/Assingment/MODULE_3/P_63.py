def sum_div(n):
    d = [1]
    for i in range(2,n):
        if (n%i)==0:
            d.append(i)
    return sum(d)

print(sum_div(9))        