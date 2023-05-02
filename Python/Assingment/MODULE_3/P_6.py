def myfun(a):
    c = 0

    for word in a:
        if len(word) > 1 and word[0] == word[-1]:
            c += 1

    return c

print(myfun(['deepak','abc','3342','python']))        
