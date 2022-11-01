#include<stdio.h>
void main()

{
	char name[10];
	int age;
	float salary;
	
	printf("\nEnter Name : ");
	//scanf("%s",&name);
	gets(name);
	printf("Enter Age :");
	scanf("%d",&age);
	printf("Enter Salary :");
	scanf("%f",&salary);
	
	printf("\nName : %s",name);
	printf("\nAge : %d",age);
	printf("\nSalary : %.2f",salary);
}