#include<stdio.h>

void main()
{
	char p,d,s=0,z;
	printf("\nEnter Nuber : ");
	scanf("%d",&p);
	
	d=p;
	while(p>0)
	
	{
		z=p%10;
		s=z+(s*10);
		p=p/10;
	}
	if(d==s)
	printf("palindome Number");
	else
	printf("Not");
}