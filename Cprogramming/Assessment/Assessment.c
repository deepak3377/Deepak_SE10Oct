#include<stdio.h>
#include<string.h>

void Reverse()
{
	char str[40];
	printf("\nEnter a string to be reversed :");
	scanf("%s",&str);
	
	for(int i=strlen(str)-1;i>=0;i--)
	{
	
	
	printf("%c",str[i]);
}
}

void Conca()
{
	char a_string[20];
	char b_string[20];
	int i;
	printf("Enter the A string");
	scanf("%s",a_string);
	printf("Enter the B string");
	scanf("%s",b_string);
	
	for(i=0;a_string[i]!='\0';i++);
	
	for(int j=0;b_string[i]!='\0';j++);
	{
		a_string[i]=b_string[i];
		i++;
	}
	
	a_string[i]='\0';
	
	printf("After concatenation : %S",a_string);
}

void Palin()
{
	int n,r,sum=0,temp;
	printf("Enter the Number : ");
	scanf("%d",&n);
	
	temp=n;
	
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	
	if(temp==sum)
	printf("palindroma number");
	else
	printf("not palindroma");
}

void copys()
{
	char a1[100],a2[100],i;
	
	printf("Enter the string a1 : ");
	fgets(a1, sizeof(a1),stdin);
	
	for(i=0;a1[i]!='\0';++i)
	{
		a2[i]=a2[i];
	}
	
	a2[i]='\0';
	printf("string s2 : %s",a2);
	
}

void Length()
{
	char s[100];
	int i;
	
	printf("Enter a string : ");
	scanf("%s",s);
	
	for(i=0;s[i] !='\0';i++);
	printf("Lenght of string : %d",i);
	
}

void Freq()
{
    char str[1000], ch;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; ++i)
	 {
        if (ch == str[i])
            ++count;
    }

    printf("Frequency of %c = %d", ch, count);
}

void Consvowe()
{
	
    char s[1000];  
    int i,vowels=0,consonants=0;
 
    printf("Enter  the string : ");
    gets(s);
     
    for(i=0;s[i];i++)  
    {
    	if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122))
    	{
		
            if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O' ||s[i]=='U')
		      vowels++;
            else
             consonants++;
        }

 	}
 	
     
    printf("vowels = %d\n",vowels);
    printf("consonants = %d\n",consonants);
}

void DigitsBlankspacse()
{
	
  char str[100];
    int countDigits,countSpaces;
    int counter;
    countDigits =countSpaces = 0;

    printf("Enter a string: ");
    gets(str);

    for (counter = 0; str[counter] != NULL; counter++) 
	{

        if (str[counter] >= '0' && str[counter] <= '9')
            countDigits++;
        else if (str[counter] == ' ')
            countSpaces++;
    }

    printf("\nDigits: %d \nSpaces: %d", countDigits,countSpaces);


}


void main()
{
	int choice;
	
	printf("\nMain Menu\n \tPress 1.Reverse\n \tPress 2. Concatention\n \tPress 3.Palindroma\n \tPress 4.Copy\n \tPress 5.Lenght\n \tPress 6.Frequency\n \tPress 7.Vowels_consonants\n \tPress 8.Spaces_Digits");
	printf("\n\nEnter Your choice ?");
	scanf("%d",&choice);
	fflush(stdin);
	
	
	
	switch(choice)
	{
		case 1: Reverse();
		        break;
		case 2: Conca();
		break;
		case 3: Palin();
		break;
		case 4: copys();
		break;
		case 5: Length();
		break;
		case 6: Freq();
		break;
		case 7: Consvowe();
		break;
		case 8: DigitsBlankspacse();
		break;
		default:printf("\nInvalid Choice");
		break;         
	}
	
	
}