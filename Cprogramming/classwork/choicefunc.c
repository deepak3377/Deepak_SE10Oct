#include<stdio.h>

void add()
{
	int a,b;
	printf("\nEnter A & B : ");
	scanf("%d%d",&a,&b);
	printf("\nAdd : %d",(a+b));
}

void sub()
{
	int a,b;
	printf("\nEnter A & B : ");
	scanf("%d%d",&a,&b);
	printf("\nAdd : %d",(a-b));
}

void mul()
{
	int a,b;
	printf("\nEnter A & B : ");
	scanf("%d%d",&a,&b);
	printf("\nAdd : %d",(a*b));
}

void div()
{
	int a,b;printf("\nEnter A & B : ");
	scanf("%d%d",&a,&b);
	printf("\nDiv : %d",((float)a/b));
}





void main()

{
	
	int choice;
	printf("\n\nPress1.Add\nPress2.Sub\nPress3.Mul\n\Press4.Div");
	printf("\nEneter our choice ? ");
	scanf("%d",&choice);
	
		
	switch(choice)
	{
		case 1: add();
		               break;
		case 2: sub();
		               break;
		case 3: mul();
		               break;
		case 4: div();
		               break;
		default: printf("\nInvalid Choice");
		                break;							   			   			                  
	}

	
}