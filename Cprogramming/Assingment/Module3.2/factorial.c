#include<stdio.h>
void main()

{
	int count,number;
	int fact=1;
	
	printf("\n Enter Number : ");
	scanf("%d",&number);
	
	for(count=1;count<=number;count++)
	{
		fact=fact*count;
	}
	
	printf("Factorial of %d is : %d",number,fact);
}