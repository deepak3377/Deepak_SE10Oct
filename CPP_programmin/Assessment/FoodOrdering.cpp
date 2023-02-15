#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	char name[30],pizza1[]="7 Cheese Pizaa",pizza2[]="Marghrita Pizza",pizza3[]="BBQ Chicken Pizaa",roll1[]="Paneer Rolls",roll2[]="BBQ rolls",roll3[]="Veg Rolls With Fries",bur1[]="Veg Burger",bur2[]="Chicken Burger",bur3[]="Zinger Burger";
	char sand1[]="Club Sandwich", sand2[]="Chicken Crispy Sandwich", sand3[]="Extream Veg Sandwich";
	char bir1[]="Veg Biryani", bir2[]="Special Biryani", bir3[]="Chicken Biryani",gotostart;
	int choice=0,pchoice,pchoice1, quantity;
	
	beginning:
		system("CLS");
		cout<<"\t\t\t--------- Tops Tech , Fast food---------\t\t\t";
		cout<<"\nPlease enter your name : ";
		cin.getline(name,20);
		cout<<"Hello  "<<name<<"\n\nWhat would you like to order ?\n\n";
		
		
		cout<<"\t\t\t\t---------Menu---------\n\n";
		
		cout<<"1. Pizzas\n";
		cout<<"2. Burgers\n";
		cout<<"3. Sandwich\n";
		cout<<"4. Rolles\n";
		cout<<"5. Biryani\n\n";
		cout<<"\nPlease Enter Your Choice : ";
		cin>>choice;
		
		if(choice==1)
		 {
		 	cout<<"\n1." <<pizza1<<"\n";
		 	cout<<"\n2." <<pizza2<<"\n";
		 	cout<<"\n3." <<pizza3<<"\n";
		 	cout<<"\nPlease Enter Wich Pizaa You Would Like To Have ?";
		 	cin>>pchoice;
		 	if(pchoice>=1 && pchoice<=5)
		 	{
		 		cout<<"\n1. Small Rs.270\n"<<"2. Regular Rs 350\n "<<"3. Large Rs.500\n";
		 		cout<<"\n Choose size Please : ";
		 		cin>>pchoice1;
		 		 if(pchoice1>=1 && pchoice<=3)
		 		 cout<<"Please Enter Quantity : ";
		 		 cin>>quantity;
		 		 switch(pchoice1)
		 		 {
		 		 	case 1:
		 		 		choice = 270*quantity;
		 		 		break;
		 		 	case 2: choice = 350*quantity;
		 		 	    break;
		 		 	case 3: choice = 500*quantity;
					    break;  
					  	
				  }
				  	system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<pizza1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\n\nThank you For Ordering From From Tops Tech Fast Food\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<pizza2;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From From Tops Tech Fast Food\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<pizza3;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From From Tops Tech Fast Food\n";
			 break;

			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}
			 }
		 }
		
		else if(choice==2)
	 {
		cout<<"\n1. "<<bur1<<" Rs.50"<<"\n";
		cout<<"2. "<<bur2<<" Rs.100"<<"\n";
		cout<<"3. "<<bur3<<" Rs.150"<<"\n";
		//cout<<"4 "<<pizza4<<"\n";
		cout<<"\nPlease Enter which Burger you would like to have?: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 50*quantity;
			break;

			case 2: choice = 100*quantity;
			break;

			case 3: choice = 150*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<bur1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Tops Tach fast food \n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<bur2;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Tops Tach fast food\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<bur3;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Tops Tach Fast Food\n";
			 break;


			}
			cout<<"\nWould you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}

 }
}
            else if(choice==3)
	 {
		cout<<"\n1 "<<sand1<<" Rs.80"<<"\n";
		cout<<"2 "<<sand2<<" Rs.100"<<"\n";
		cout<<"3 "<<sand3<<" Rs.180"<<"\n";
		cout<<"\nPlease Enter which Sandwich you would like to have?: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 80*quantity;
			break;

			case 2: choice = 100*quantity;
			break;

			case 3: choice = 180*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<sand1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Tops Tach fast food \n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<sand2;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Tops Tach fast food\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<sand3;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Tops Tach Fast Food\n";
			 break;


			}
			cout<<"\nWould you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}

  }
}

		
		else if(choice==4)
		  {
		  	cout<<"\n1. "<<roll1<<" Rs.80 "<<"\n";
		  	cout<<"\n2. "<<roll2<<" Rs.120 "<<"\n";
		  	cout<<"\n3. "<<roll3<<" Rs.160 "<<"\n";
		  	
		  	cout<<"\nPlease Enter Which Roll You Would Like To Have ? ";
		  	cin>>pchoice1;
		  	if(pchoice1>=1 && pchoice<=3)
		  	 {
		  	 	cout<<"\n Please Enter Quantity ";
		  	 	cin>>quantity;
		  	 	switch(pchoice1)
		  	 	{
		  	 		case 1: choice =80*quantity;
		  	 		break;
		  	 		
		  	 		case 2: choice = 120*quantity;
		  	 		break;
		  	 		
		  	 		case 3: choice = 160*quantity;
		  	 		break;
		  	 		
				   }
				   system ("CLS");
				   switch (pchoice1)
				   {
				   	case 1:
				   		cout<<"\t\t--------Your Order--------\n";
				   		cout<<""<<quantity<<" "<<roll1;
				   		cout<<"\nYour Total Bill Is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
				   		cout<<"\nThank You For Ordering From Tops Tech. Fast Food\n";
				   		break;
				   	case 2:
				   		cout<<"\t\t--------Your Order--------\n";
				   		cout<<""<<quantity<<" "<<roll2;
				   		cout<<"\nYour Total Bill Is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
				   		cout<<"\nThank You For Ordering From Tops Tech. Fast Food\n";
				   		break;
					case 3:
				   		cout<<"\t\t--------Your Order--------\n";
				   		cout<<""<<quantity<<" "<<roll3;
				   		cout<<"\nYour Total Bill Is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
				   		cout<<"\nThank You For Ordering From Tops Tech. Fast Food\n";
				   		break;	   	
				   		
				   }
				   cout<<"\nWould you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}
			   }
		  }
		  
		  else if(choice==5)
		  {
		  	cout<<"\n1. "<<bir1<<" Rs.100 "<<"\n";
		  	cout<<"\n2. "<<bir2<<" Rs.160 "<<"\n";
		  	cout<<"\n3. "<<bir3<<" Rs.200 "<<"\n";
		  	
		  	cout<<"\nPlease Enter Which type biryani You Would Like To Have ? ";
		  	cin>>pchoice1;
		  	if(pchoice1>=1 && pchoice1<=3)
		  	 {
		  	 	cout<<"\nPlease Enter Quantity ";
		  	 	cin>>quantity;
		  	 	switch(pchoice1)
		  	 	{
		  	 		case 1: choice =100*quantity;
		  	 		break;
		  	 		
		  	 		case 2: choice = 160*quantity;
		  	 		break;
		  	 		
		  	 		case 3: choice = 200*quantity;
		  	 		break;
		  	 		
				   }
				   system ("CLS");
				   switch (pchoice1)
				   {
				   	case 1:
				   		cout<<"\t\t--------Your Order--------\n";
				   		cout<<""<<quantity<<" "<<bir1;
				   		cout<<"\nYour Total Bill Is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
				   		cout<<"\nThank You For Ordering From Tops Tech. Fast Food\n";
				   		break;
				   	case 2:
				   		cout<<"\t\t--------Your Order--------\n";
				   		cout<<""<<quantity<<" "<<bir2;
				   		cout<<"\nYour Total Bill Is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
				   		cout<<"\nThank You For Ordering From Tops Tech. Fast Food\n";
				   		break;
					case 3:
				   		cout<<"\t\t--------Your Order--------\n";
				   		cout<<""<<quantity<<" "<<bir3;
				   		cout<<"\nYour Total Bill Is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
				   		cout<<"\nThank You For Ordering From Tops Tech. Fast Food\n";
				   		break;	   	
				   		
				   }
				   cout<<"\nWould you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}
		}
	 }
		  		else
			{
				system("CLS");
				cout<<"Please Select Right Option: \n";
				cout<<"Would You like to Start the program again? Y / N: " ;
				cin>>gotostart;

				if(gotostart=='Y' || gotostart=='y')
				{
				  goto beginning;
			  //return 0;
	        	}
		   }

     getch();
		  
		  
		  
		  
	return 0;
}