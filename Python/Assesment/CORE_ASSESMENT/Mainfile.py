from unittest import result
import pymysql
import Assesment_1

mydb = pymysql.connect(host="localhost",user="root",password="",database="core_db")
mycursor = mydb.cursor()

menu = """

1) Banker
2) Customer

"""
status = True
p_status = True

while status:
    print(menu)

    choice = int(input("Enter Your Choice : "))

    if choice ==1:
        print("Welcome to Banker Page")
        view = """
        1) Register
        2) Login
        3) Update all Customers
        4) View all Customers
        5) Delete all customers
        """

        
        while p_status:
            print (view)
            choice = int(input("Enter Your Choice : "))

            if choice==1:
              email =  input("Enter E-mail : ")
              fname = input("Enter Your First Name : ")
              lname = input("Enter Your Last Name :  ")
              password = input("Enter Your Password : ")

              print("You Register Succesfully")

              query = "insert into pras23 (email,fname,lname,password) values ('%s','%s','%s','%s')"
              args = (email,fname,lname,password)
              mycursor.execute(query % args)
              mydb.commit()

            elif choice==2:
                email = input("Enter Email : ")
                password = input("Enter Password : ")

                query = "Select * From pras23 where email = '%s' and password = '%s'"
                args = (email,password)
                mycursor.execute(query % args)
                result = mycursor.fetchone()
                mydb.commit()
                
                if result:
                    print("Login Succesfully")

                else:
                    print("Enter Valid email or password")
                    

            elif choice==3:
                id = int(input("Enter ID : "))
                email =  input("Enter E-mail : ")
                fname = input("Enter Your First Name : ")
                lname = input("Enter Your Last Name :  ")
                password = input("Enter Your Password : ")

                query = "update pras23 set email = '%s', fname = '%s',lname = '%s',password = '%s' where id = %s"
                args = (email,fname,lname,password,id)
                mycursor.execute(query % args)
                mydb.commit()
                print("Updated Successfully!!")


            elif choice==4:
                query = "select * from pras23"
                mycursor.execute(query)
                data = mycursor.fetchall()
                print(data)

            elif choice==5:
                id = int(input("Enter Id : "))
                query = "delete from pras23 where id = %s"
                args = (id)
                mycursor.execute(query % args)

                mydb.commit()
                print("Deleted Successfully!!")

            choice = input("Are you want to do more Operations press Y for yes and N for no : ")
            if choice == "n" or choice== "N":
                p_status=False


    else:
        print("Welcome to Customer Page")
        viewc = """
        1) Register
        2) Login
        3) Withdraw Amount
        4) Deposit Amount
        5) View Balance
        """
        
        
        while p_status:
            print(viewc)
            choice = int(input("Enter Your Choice : "))
            if choice == 1:
                ac_no = int(input("Enter Account No : "))
                cfname = input("Enter First Name : ")
                clname = input("Enter Last Name : ")
                cpassword = input("Enter Password : ")
                bal = int(input("Enter Balance : "))

                print("You Register Succesfully")

                query = "insert into cust23 (ac_no,cfname,clname,cpassword,Balance) values ('%s','%s','%s','%s','%s')"
                args = (ac_no,cfname,clname,cpassword,bal)
                mycursor.execute(query%args)
                mydb.commit()

            elif choice == 2:

                ac_no = int(input("Enter Account No : "))
                cpassword = input("Enter Password : ")

                query = "Select * From cust23 where ac_no = '%s' and cpassword = '%s'"
                args = (ac_no,cpassword)
                mycursor.execute(query % args)
                result = mycursor.fetchone()
                mydb.commit()
                
                if result:
                    print("Login Succesfully")

                else:
                    print("Enter Valid Account Number or password")


            elif choice==3:
                ac_no = int(input("Enter Account No : "))
                cpassword = input("Enter Password : ")

                query = "Select * From cust23 where ac_no = '%s'and cpassword = '%s'"
                args = (ac_no,cpassword)
                mycursor.execute(query % args)
                result = mycursor.fetchone()
                print("====>>> result",result)
                print("=====>> balance ",result[7])

                mydb.commit()

                if result:
                    withdrawamt = int(input("Enter Withdraw Amount : "))
                    
                    query = "update cust23 set withdrawamt=%s where ac_no = %s "
                    args = (withdrawamt,ac_no)
                    mycursor.execute(query % args)
                    mydb.commit()

                    print("Your Withdrawl Amount :  ",withdrawamt)
                

                    print("You Withdraw Sucessfully!!")
                    bal = result[7]
                    ClearBalance = bal-withdrawamt 
                    print("====>> Clear balance : ",ClearBalance)
                    query = "update cust23 set withdrawamt=%s,ClearBalance=%s,Balance=%s where ac_no =%s"
                    args = (withdrawamt,ac_no,ClearBalance,bal)
                    mycursor.execute(query % args)
                    mydb.commit()
                    

                else:
                    print("Please Enter Valid Account Number Or Password !!")

                    

            elif choice==4:
                ac_no = int(input("Enter Account No : "))
                cpassword = input("Enter Password : ")
               
               
                query = "Select * From cust23 where ac_no = '%s'and cpassword = '%s'"
                args = (ac_no,cpassword)
                mycursor.execute(query % args)
                result = mycursor.fetchone()
                mydb.commit()

                if result:
                    depositamt = int(input("Enter Deposit Amount : "))
                    query = "update cust23 set depositamt=%s where ac_no = %s "
                    args = (depositamt,ac_no)
                    mycursor.execute(query % args)
                    mydb.commit()

                    print ("Your Deposit Amount is : ",depositamt)
                    print("You Deposited Successfully!!")


                    bal = result[7]
                    ClearBalance = bal+depositamt 
                    print("====>> Clear balance : ",ClearBalance)
                    query = "update cust23 set withdrawamt=%s,ClearBalance=%s,Balance=%s where ac_no =%s"
                    args = (depositamt,ac_no,ClearBalance,bal)
                    mycursor.execute(query % args)
                    mydb.commit()



                else:
                    print("Please Enter Valid Account Number Or Password !!")


            elif choice ==5:
                ac_no = int(input("Enter Account No : "))
                cpassword = input("Enter Password : ")

                query = "Select * From cust23 where ac_no = '%s'and cpassword = '%s'"
                args = (ac_no,cpassword)
                mycursor.execute(query % args)
                result = mycursor.fetchone()
                mydb.commit()
                

                if result:
                    
                    withdrawamt = result[5]
                    depositamt = result[6]
                    bal = result[7]
                    clearbal = bal+depositamt-withdrawamt

                    
                    print("Your Clear Balance is : ",clearbal)


                else:
                    print("Please Enter Valid Account Number Or Password !!")


               


                


    



                

                        



            



            

                    


                


                



                    
            
















            
                



            
    




