#include<stdio.h>
#include<string.h>




void main()
{

	char fname[10]="tops";
	char lname[10]="CG ROAD";
	char str3[10];
	char str1[10]="animal";
	char str2[10]="ZOO";
	
	
	printf("\nString 1 : %s",fname);
	printf("\nString 2 : %s",lname);
	printf("\n\nString1 Length : %d",strlen(fname));
	printf("\nString1 Reverse : %s",strrev(fname));
	//str3 = fname; // invalid
	printf("\nString Copy : %s",strcpy(str3,lname));
	//printf("\n%s",str3);
	printf("\nString Concatenate : %s",strcat(fname,lname));
	printf("\nString Compare : %d",strcmp(str1,str2));
	printf("\nString Uppercase : %s",strupr(str1));
	printf("\nString Lowercase : %s",strlwr(str2));
	
	
}





