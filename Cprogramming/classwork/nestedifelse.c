#include<stdio.h>

void main()

{
	
 int n1,n2,n3;
  
 printf(" \nEnter N1: ");
 scanf("%d",&n1);
 printf("\nEnter N2: ");
 scanf("%d",&n2);
 printf("\nEnter N3: ");
 scanf("%d",&n3);
 
 printf("\nN1 = %d, N2 =%d, N3 = %d",n1,n2,n3);
 
 if (n1 > n2)
 
 {
 	if(n1 > n3)
 	{
 		printf("\n%d is Greater",n1);
	 }
 	 }
	 
	 else
	 {
	 	printf("\n%d is Greater",n3);
	 }
	 
 }


