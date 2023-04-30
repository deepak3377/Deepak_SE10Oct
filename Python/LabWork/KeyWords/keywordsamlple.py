# keywords : A word which have predefined meaning 

            # A reverse word
            # you cna't take as varible 

"""
for 
while 
break 
continue

"""

import keyword

keyword_list = keyword.kwlist

#print(keyword_list)

name = input("Enter Name : ")

if name in keyword_list:
    print("yes, It is a keyword")
else:
    print("No, It is Not keyword")    