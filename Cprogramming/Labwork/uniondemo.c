#include<stdio.h>

union Employee{
	int eid;
	char name[10];
	float esal;
};

void main()
{
	union Employee e;
	printf("\nEnter Id : ");
	scanf("%d",&e.eid);
	printf("Id : %d",e.eid);
	printf("\nEnter Nmae : ");
	scanf("%s",&e.name);
	printf("\nName : %s",e.name);
	printf("\nEnter Salary : ");
	scanf("%f",&e.esal);
	printf("Salary : %2.f",e.esal);
	
	printf(" size is : %d Bytes",sizeof(e));
}