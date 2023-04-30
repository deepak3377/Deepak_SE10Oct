#creating database Book

import pymysql

#connectin database on server
mydb = pymysql.connect(host = 'localhost',user = 'root',password = '')
mycursor = mydb.cursor()

#now creatinf data base
mycursor.execute("create database if not exists book_details")
mydb.commit()

#connection with database
mydb = pymysql.connect(host='localhost',user = 'root',password = '',database = "book_details")
mycursor = mydb.cursor()

#creating table

mycursor.execute("create table if not exists book (no int auto_increment primery key,Book_Name)")