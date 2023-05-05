#Python program to read a file line by line and store it into a list
def fr(fname):
    with open(fname) as f:
        content_list = f.readlines()
        print(content_list)

fr("myfile.txt")