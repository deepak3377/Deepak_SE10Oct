#need to istall xamp server and mysql
#after instalation xamp server need to start apche server and mysql sever
#need to install my sql -> pip install pymysql

import pymysql

#connection with server
mydb = pymysql.connect(host='localhost',user='root',password="")
mycursor = mydb.cursor()

#need to creat database
mycursor.execute("create database if not exists 10feb_db")
mydb.commit()

#conection with database
mydb = pymysql.connect(host='localhost',user='root',password="",database="10feb_db")
mycursor = mydb.cursor()

#table creation
mycursor.execute("create table if not exists student23(id INT AUTO_INCREMENT PRIMARY KEY,name varchar(20),subject varchar(20))")

mydb.commit()




CREATE TABLE IF NOT EXISTS users (
    id INT AUTO_INCREMENT PRIMARY KEY,
    username VARCHAR(255) NOT NULL,
    password VARCHAR(255) NOT NULL