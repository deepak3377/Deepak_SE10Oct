import random
import tkinter
#take base screen
screen = tkinter.Tk()
#screen geometry(resolution)
screen.geometry("430x500")

#Logic implementation
l1 = ["ROCK","PAPER","SCISSOR"]
def mygame(userchoice):
    print(userchoice)
    computerchoice = random.choice(l1)
    if userchoice == computerchoice:
        print("TIE")
    



lbl = tkinter.Label(screen,text="ROCK PAPER SICSSOR",font=('Arial',20,"bold"))
lbl.pack()

l1_lbl = tkinter.Button(screen,text="ROCK",bg='blue',fg='white',font=('Arial',18,'bold'),command=lambda:mygame('ROCK'))
l1_lbl.place(x=20,y=60)

l2_lbl = tkinter.Button(screen,text="PAPER",bg='blue',fg='white',font=('Arial',18,'bold'),command=lambda:mygame('PAPER'))
l2_lbl.place(x=160,y=60)

l3_lbl = tkinter.Button(screen,text="SICSSOR",bg='blue',fg='white',font=('Arial',18,'bold'),command=lambda:mygame('SICSSOR'))
l3_lbl.place(x=300,y=60)




#begin : user score bord


l4_lbl=tkinter.Label(screen,text='USER',font=('Arial',15,'bold'))
l4_lbl.place(x=20,y=150)

l5_lbl=tkinter.Label(screen,text='0',font=('Arial',15,'bold'))
l5_lbl.place(x=160,y=150)



l7_lbl=tkinter.Label(screen,text='COMPUTER',font=('Arial',15,'bold'))
l7_lbl.place(x=20,y=200)

l8_lbl = tkinter.Label(screen,text='0',font=('Arial',15,'bold'))
l8_lbl.place(x=160,y=200)



#end user score board

l10_lbl = tkinter.Button(screen,text='RESULT',bg='green',fg='white',font=('Arial',15,'bold'),width=13,height=2)
l10_lbl.place(x=160,y=300)



screen.mainloop()
