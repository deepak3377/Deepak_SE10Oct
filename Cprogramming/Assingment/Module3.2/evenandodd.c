#include<stdio.h>

void main()
{
	int n;
	
	printf("Enter the number :");
	scanf("%d",&n);
	
	(n%2) ? printf(" %d Is Even number\n ",n) :	printf("%d IS Odd number ",n);
	
}