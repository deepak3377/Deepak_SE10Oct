import pymysql

mydb = pymysql.connect(host="localhost",user="root",password="")
mycursor = mydb.cursor()

mycursor.execute("create database if not exists core_db")
mydb.commit()

mydb = pymysql.connect(host="localhost",user="root",password="",database="core_db")
mycursor = mydb.cursor()

mycursor.execute("create table if not exists Bank(id int primary key auto_increment,fname varchar(20),lname varchar(20),email varchar(20),apassword varchar(20),emailr varchar(20),password varchar(20))")
mydb.commit() 

mycursor.execute("create table if not exists custnew(id int primary key auto_increment,cfname varchar(20),clname varchar(20),ac_no int(20),cpassword varchar(20),withdrawamt int(05),depositamt int(05),Balance int(05),ClearBalance int(05))")
mydb.commit()