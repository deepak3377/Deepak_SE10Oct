a = ["one","two","three","Deepakv"]
max =len(a[0])
t=a[0]

for i in a:
    if (len(i) > max):
        max = len (i)
        t = i
print("The Word With longet lenght is ",t,"and lenght is",max)
        