#include<stdio.h>

void main()

{
	int a=15,b=20;
	
	printf("Before swap a =%d b=%d",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\nAfter swap a=%d b=%d",a,b);
}