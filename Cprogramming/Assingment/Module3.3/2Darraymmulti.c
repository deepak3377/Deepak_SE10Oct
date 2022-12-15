#include<stdio.h>

void main()
{
	int arr1[2],i;
	int arr2[2];
	
	printf("\n---------------Accepting Array 1 Elements : -----------------\n\n");
	for(i=0;i<2;i++)
	{
		printf("Enter Value in Index [%d]: ",i);
		scanf("%d",&arr1[i]);
	}
	
	for(i=0;i<2;i++)
	{
		printf("\nValue at Index [%d] : %d",i,arr1[i]);
	}
	
	printf("\n\n---------------Accepting Array 2 Elements : -----------------\n\n");
	for(i=0;i<2;i++)
	{
		printf("Enter Value in Index [%d]: ",i);
		scanf("%d",&arr2[i]);
	}
	
	for(i=0;i<2;i++)
	{
		printf("\nValue at Index [%d] : %d",i,arr2[i]);
	}
	
	printf("\n\n---------------Addition of 2 Arrays  : -----------------\n\n");
	for(i=0;i<2;i++)
	{
		printf("\nAddition [%d] : %d",i,arr1[i]+arr2[i]);
		printf("\nMultiplication [%d] : %d",i,arr1[i]*arr2[i]);
		printf("\nSubtraction [%d] : %d",i,arr1[i]-arr2[i]);
	}
	
	
	
	
}