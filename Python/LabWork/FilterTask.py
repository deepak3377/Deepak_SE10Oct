subject = ["English","math","java","php","ss","python"]

tops_sublist = ["c","c++","python","java"]

def myfun(seq):
    if (seq in tops_sublist):
        return True
    else:
        return False
    
filtered_data = filter(myfun,subject)

for i in filtered_data:
    print(i)


