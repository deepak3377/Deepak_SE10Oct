#include <stdio.h>

void main()
{
	int age;
	
	printf("\nEnter Age : ");
	scanf("%d",&age);
	
	if(age>18)
	{
		printf("\nYou are eligible");
	}
	else
	{
		printf("\nYou are not eligible");
	}
}