#include<stdio.h>

void main()

{
	int i,n;
	printf("\nEnter the value : ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("\n%d x %d = %d",n,i,n*i);
	}
}