#include<stdio.h>

void main()

{
	int a,b,choice;
	printf("\nEnter A & B : ");
	scanf("%d%d",&a,&b);
	printf("\nA = %d, B = %d",a,b);
	printf("\n\n Press 1. Addition\nPress 2. Subtraction\nPress 3. Multiplicatin\nPress 4. Division");
	printf("\n\nEnter your choice ?");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: printf ("\nAddition : %d",(a+b));
		                  break;
		case 2: printf ("\nSubtraction : %d",(a-b));
		                  break;
		case 3: printf ("\nMultiplicatin  : %d",(a*b));
		                  break;
		case 4: printf ("\Division : %.2f",((float)a/b));
		                  break;
		default:printf("\nInvalid Choice");
		                 break;                  
						                    
						                    
		                  
	}
}