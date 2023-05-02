a = [{'d' : 1},{'d' : 1},{'q' : 2},{'w' : 3},{"e" : 9}]

s = set(val for dic in a for val in dic.values())

print("Unique Values :",s)