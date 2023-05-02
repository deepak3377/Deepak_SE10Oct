a = "w3resource"
b = {}
for letter in a:
    b[letter] = b.get(letter,0) + 1
print(b)



