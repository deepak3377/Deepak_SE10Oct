#include<stdio.h>

void main()
{
	int a[10],i;
	int evencount=0,oddcount=0;
	
	printf("\nEnter the any 10 Elements\n");
	
	for(i=0;i<10;i++);
	{
		scanf("%d",&a[i]);
		
		if(a[i]%2==0)
		evencount++;
		
		else
		
		oddcount++;
		
	}
	
	printf("\nTotal Even number is %d",evencount);
	printf("\nTotal odd number is %d",oddcount);
}