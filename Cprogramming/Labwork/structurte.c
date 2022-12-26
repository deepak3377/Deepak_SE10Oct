#include<stdio.h>

struct Employee{
	int eid;
	char name[10];
	float esal;
};

void main()
{
	struct Employee e;
	printf("\nEnter Id : ");
	scanf("%d",&e.eid);
	printf("\nEnter Nmae : ");
	scanf("%s",&e.name);
	printf("Enter Salary : ");
	scanf("%f",&e.esal);
	
	printf("\n\nId : %d",e.eid);
	printf("\nName : %s",e.name);
	printf("\nSalary : %2.f",e.esal);
	
	printf("\n\nstruct size is : %d Bytes",sizeof(e));
}