#include<stdio.h>
#include<conio.h>
void main()
{
	char a[100];
	void strlen(char a[]);
	clrscr();
	printf("please enter a string \n");
	gets(a);
	strlen(a);
	getch();
	}
	void strlen (char a[])
	{
		int c=0,i=0;
		while(a[i]!='\0')
		{
			c++;
			i++;
		}
		printf("the string length is : %d",c);
	}