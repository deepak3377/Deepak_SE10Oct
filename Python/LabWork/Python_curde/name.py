#importing connecting file

import Conection
import pymysql

#connect with database
mydb = pymysql.connect(host='localhost',user="root",password="",database="10feb_db")
mycursor = mydb.cursor()

status = True

while status:
    data = """

                Menu

                1)store data
                2)View data
                3)update data
                4)search data
                5)delete data
           """ 
    print(data)

    choice = int(input("Enter your choice : "))
    if choice == 1:
        #to insert data 
        name = input("Enter Your name : ")
        subject = input("Enter your subject : ")

        #query
        query = " insert into student23(name,subject) values('%s','%s')"

        args = (name,subject)

        mycursor.execute(query % args)

        #to save changes
        mydb.commit()

        print("successfuly data inserted")

    elif choice ==2:
        #to fatch all data
        query = "select *from student23"
        mycursor.execute(query)


        #execute query
        data=mycursor.fetchall()

        print(data) 

    elif choice ==3:

        #to update data 
        id = int(input("Enter id : "))
        name = input("Enter name : ")
        subject = input("Enter Subject : ") 

        #query 
        query = "update student23 set name = '%s', subject = '%s', where id = '%s' "
        args = (name,subject,id)

        mycursor.execute(query%args) 
        mydb.commit()

        print("update successfully !!")

    elif choice ==4:
        #serch data
        id = int(input("Enter id : "))

        #query
        query = "select *from student23 where id = %s"

        #args
        args = (id) 

        mycursor.execute(query%args)

        #reteive all data in row variable
        row = mycursor.fetchone() 

        #id = 0 name = 1 subject = 2

        displayname = row[1]
        displaysubject = row[2]

        print("name =",displayname)
        print("subject = ",displaysubject)  

    elif choice ==5:
        #delete data
        id = int(input("Enter id : "))

        #query
        query = "delete from student23 where id = %s"

        #args
        args = (id)

        mycursor.execute(query%args) 

        mydb.commit()

        print("deleted successfully")   


    loop_choice= input("Do you want to perform motre operation press 'y' for yes and 'n' for no : ")
    if loop_choice == 'n' or loop_choice == 'no':
        status = False        