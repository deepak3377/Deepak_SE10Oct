#include<stdio.h>

void main()
{
	char s[100];
	int i;
	
	printf("Enter a string : ");
	scanf("%s",s);
	
	for(i=0;s[i] !='\0';i++);
	printf("Lenght of string : %d",i);
	
}