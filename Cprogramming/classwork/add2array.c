#include<stdio.h>

void main()

{
	int arr1[3][3];
	int arr2[3][3];
	int i,j;
	printf("\n\n-----------Enter Matrix 1 Elements : -----------\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Value at index [%d][%d] ",i,j);
			scanf("%d",&arr1[i][j]);
			
		}
	}
	
	printf("\n\n----------Enter matrix 2 Elements : ----------\n\n");
	for(j=0;j<3;j++)
	{
		for(j=0;j<3;j++);
	
	{
		printf("Enter Value At index [%d][%d]",i,j);
		scanf("%d",&arr2[i][j]);
	}
	
    }
    printf("\n\n-----------Matrix 1 Elements : ---------------\n\n ");
    
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n-----------Matrix 2 Elements : ---------------\n\n ");
    
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n-----------Add 2 Matrix : -------------\n\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr1[i][j]+arr2[i][j]);
		}
	}
	printf("\n");

}