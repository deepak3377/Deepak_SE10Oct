#include<stdio.h>

void main()

{
	int rno,s1,s2,s3,total;
	char name[5];
	float per;
	
	printf("\nEnter Roll No : ");
	scanf("%d",&rno);
	printf("Enter Name : ");
	scanf("%s",&name);
	printf("Enter Physics Marks : ");
	scanf("%d",&s1);
	printf("Enter Chemistr Mark : ");
	scanf("%d",&s2);
	printf("Enter Maths Mark : ");
	scanf("%d",&s3);
	total = s1+s2+s3;
	per = (float)total/3;
	printf("\nTotal P.C.M Marks : %d",total);
	printf("\nPercentage : %.2f",per);
	
	if(per>=75)
	{
		printf("\nGrade is : Distinction");
	}
	else if(per>=60)
	{
		printf("\nGrade is : A");
	}
	else if(per>=50)
	{
		printf("\nGrade is : B");
	}
	else if(per>=40)
	{
		printf("\nGrade is : C");
	}
	else
	{
		printf("\nFail!");
	}
	
}
