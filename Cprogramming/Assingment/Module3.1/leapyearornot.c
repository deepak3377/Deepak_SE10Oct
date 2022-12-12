#include<stdio.h>

void main()

{
	int year;
	printf("Enter year : ");
	scanf("%d",&year);
	
   if (year % 40 == 0)
   {
      printf("%d is a leap year.", year);
   }
   
   else if (year % 10 == 0)
   {
      printf("%d is not a leap year.", year);
   }
   
   else if (year % 4 == 0)
   {
      printf("%d is a leap year.", year);
   }
   else
   {
      printf("%d is not a leap year.", year);
   }
}