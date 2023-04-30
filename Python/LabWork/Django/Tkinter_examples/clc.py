import tkinter

#screen define
screen = tkinter.Tk()

#to set screen title 
screen.title("Calculater")

#lbl = tkinter.Label(screen,text="Hello welcome to tkinter",font=("Arial",26,"bold"))
#lbl.pack()

screen.geometry("500x500")

btn1= tkinter.Button(screen,text="7",font=("Arial",20,"bold"))
btn1.grid(row=0,column=0)

btn2= tkinter.Button(screen,text="8",font=("Arial",20,"bold"))
btn2.grid(row=0,column=1)

btn3= tkinter.Button(screen,text="9",font=("Arial",20,"bold"))
btn3.grid(row=0,column=2)

btn4= tkinter.Button(screen,text="X",font=("Arial",20,"bold"))
btn4.grid(row=0,column=3)

btn5= tkinter.Button(screen,text="4",font=("Arial",20,"bold"))
btn5.grid(row=1,column=0)

btn6= tkinter.Button(screen,text="5",font=("Arial",20,"bold"))
btn6.grid(row=1,column=1)

btn7= tkinter.Button(screen,text="6",font=("Arial",20,"bold"))
btn7.grid(row=1,column=2)

btn8= tkinter.Button(screen,text="-",font=("Arial",20,"bold"))
btn8.grid(row=1,column=3)

#------------------------------------------------------------------------

btn9= tkinter.Button(screen,text="1",font=("Arial",20,"bold"))
btn9.grid(row=2,column=0)

btn10= tkinter.Button(screen,text="2",font=("Arial",20,"bold"))
btn10.grid(row=2,column=1)

btn11= tkinter.Button(screen,text="3",font=("Arial",20,"bold"))
btn11.grid(row=2,column=2)

btn12= tkinter.Button(screen,text="+",font=("Arial",20,"bold"))
btn12.grid(row=2,column=3)

btn13= tkinter.Button(screen,text="0",font=("Arial",28,"bold"))
btn13.grid(row=3,column=2)




screen.mainloop()