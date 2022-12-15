#include <stdio.h>              
#include<conio.h>


void main()                        
{
	int a[100],n,i,j;
	printf("Enter the Array: ");
        scanf("%d",&n);
        printf("Elements:\n ");
        
      for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
	for (int i = 0; i < n; i++)                     
	{
		for (int j = 0; j < n; j++)            
		{
			if (a[j] > a[i])                
			{
				int tmp = a[i];         
				a[i] = a[j];            
				a[j] = tmp;          
			}  
		}
	}
	printf("\n\nAscending : ");                     
	for (int i = 0; i < n; i++)                     
	{
		printf(" %d ", a[i]);
	}
	for (int i = 0; i < n; i++)                     
	{
		for (int j = 0; j < n; j++)            
		{
			if (a[j] < a[i])                
			{
				int tmp = a[i];         
				a[i] = a[j];            
				a[j] = tmp;             
			}
		}
	}
	printf("\n\nDescending : ");                    
	for (int i = 0; i < n; i++)                     
	{
		printf(" %d ", a[i]);                   
	}
         
getch();
}