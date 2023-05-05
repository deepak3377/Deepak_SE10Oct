# Python program to append text to a file and display the text.
f = open("mynew_file.txt","a")

Name = input("Enter somthing : ")

f.write("\n",Name)

#close file
f.close()