from decimal import *

data = list(map(Decimal,'2.45 2.69 2.45 3.45 2.00 0.04'.split()))

print("Maximum : ",max(data))
print("Maximum : ",min(data))