#include<stdio.h>

void main()
{
	int n,last,sum;
	printf("\nEnter Number : ");
	scanf("%d",&n);
	
	last=n%10;
	
	while(n>9)
	{
		n=n/10;
		
	}
	sum=n+last;
	
	printf("Sum of first and last number is : %d",sum);
}