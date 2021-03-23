#include<stdio.h>
#include<conio.h>
void main()
{
	char s[100];
	int i,c=0;
	clrscr();
	printf("Please enter a string \n");
	gets(s);
	i = 0;
	while(s[i]!=NULL)
	{
		c++;
		i++;
	}
	printf("the length of the string is : %d",c);
	getch();
}
