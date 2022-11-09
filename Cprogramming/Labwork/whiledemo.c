#include<stdio.h>

void main()

{
	int i=1;
	
	while(i<=1000)
	{
		printf("\t%d",i*i);
		i++;
	}
	printf("\nout of loop");
}