import tkinter

screen = tkinter.Tk()

screen.geometry("400x400")

#tkinter variable
email_var= tkinter.StringVar()
password_var = tkinter.StringVar()
msg_var = tkinter.StringVar()

#python function
def myfun():
    msg_var.set(email_var.get())

#label display
lbl = tkinter.Label(screen,text="Login from",font=('Arial',26,"bold"))
lbl.pack()

#entry display
e1_lbl = tkinter.Label(screen,text="Enter emil",font=('Arial',8,'bold'))
e1_lbl.place(x=50,y=55) #x is left to right  Y is top to bottom
e1 = tkinter.Entry(screen,textvariable=email_var)
e1.place(x=180,y=60)

#password display

e2_lbl = tkinter.Label(screen,text="Enter Password",font=('Arial',8,'bold'))
e2_lbl.place(x=50,y=95)
e2 = tkinter.Entry(screen,textvariable=password_var)
e2.place(x=180,y=102)

#button display
btn = tkinter.Button(screen,text='sign In',font=('Arial',8,'bold'),command=myfun) #here we call function
btn.place(x=180,y=130)

#final msg display
lbl_msg= tkinter.Label(screen,text='message',textvariable=msg_var)
lbl_msg.place(x=180,y=160)

screen.mainloop()
                       