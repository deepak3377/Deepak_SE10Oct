#include<stdio.h>

void main()

{
	int arr1[5],i;
	int arr2[5];
	
printf("\n\n__________Accepting Array 1 Elements : ____________\n\n");	
	for(i=0;i<5;i++)
	
	{
		printf("Enter value in index [%d] : ",i);
		scanf("%d",&arr1[i]);
		
	}
	
	for(i=0;i<5;i++)
	{
		printf("\nValue at index [%d] : %d",i,arr1[i]);
	}
	printf("\n\n__________Accepting Array 2 Elements : ____________\n\n");
	
	for(i=0;i<5;i++)
	{
		printf("Enter Value In index [%d] : ",i);
		scanf("%d",&arr2[i]);
	}
	
	for(i=0;i<5;i++)
	
	{
		printf("\nValue at index [%d] : %d",i,arr2[i]);
	}
	
}