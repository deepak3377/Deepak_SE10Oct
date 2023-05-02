# Python program to combine values in python list of dictionaries

from collections import Counter
item_list = [{'item': 'item1', 'amount': 400}, {'item': 'item2', 'amount': 300}, {'item': 'item1', 'amount': 750}]
a = Counter()
for d in item_list:
    a[d['item']] += d['amount']
print(a) 