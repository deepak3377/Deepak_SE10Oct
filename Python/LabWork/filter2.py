data_set=[12,23,6,4,78,5,3,33,67]

def myfun(data):
    if data %2==0:
        return True
    else:
        return False
    
filtered_data= filter(myfun,data_set)

for i in filtered_data:
    print(i)