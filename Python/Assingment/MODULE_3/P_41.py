# Python program to combine two dictionary adding values for
#common keys
from collections import Counter

a1 = {'a' : 2, 'n' : 3}
a2 = {'s' : 4, 'v' : 5}

a = Counter(a1) + Counter(a2)

print(a)