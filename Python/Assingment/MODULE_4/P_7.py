def file_r(fname):
    with open(fname,"r") as myfiler:
        data = myfiler.readlines()
        print(data)

file_r("file.txt")
