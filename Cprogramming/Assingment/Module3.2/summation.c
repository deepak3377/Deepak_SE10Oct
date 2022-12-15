#include<stdio.h>

void main()
{
	int p,q,sum=0;
	printf("\nEnter Number : ");
	scanf("%d",&p);
	
	while(p>0)
	{
		q=p%10;
		sum=sum+q;
		p=p/10;
	}
	
	printf("sum of Number is : %d",sum);
}