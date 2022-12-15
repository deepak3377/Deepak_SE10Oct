#include<stdio.h>

void main()
{
	int i,j;
	for(i=0;i<=5;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%c",'1' + j-1);
		}
		
		printf("\n");
	}
}