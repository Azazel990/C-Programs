#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[100],c[100];
	clrscr();
	printf("Please Enter some Characters\n");
	gets(a);
	strcpy(c,a);
	strrev(a);
	printf("%s\n",a);
	if(strcmp(c,a)==0)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not plindrome");
	}
	getch();
   }
