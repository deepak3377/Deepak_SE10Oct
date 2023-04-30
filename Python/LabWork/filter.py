"""
filter(): filter is a method which is filter given sequence with the help of function that test ich element of the sequence 

        syntax:


# without filter
l1 = ['a','e','v','j','a']

vowel_list = ['a','e','i','o','u']

l2= []

def checkVowel():
    for c in vowel_list:
        l2.append(c)

checkVowel()

for i in l2:
    print(i)

"""
#with filter 

l1 = ['a','e','v','j','a']

vowel_list = ['a','e','i','o','u']

def myfun(seq):
    if (seq in vowel_list):
        return True
    else:
        return False

filtered_data = filter(myfun,l1)

for i in filtered_data:
    print(i) 

