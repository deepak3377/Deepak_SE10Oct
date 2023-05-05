language = ['python','php','java',]

with open('l_file.txt',"w") as myfile:
    for c in language:
        myfile.write("%s\n" %c)

content = open('l_file.txt')
print(content.read)        