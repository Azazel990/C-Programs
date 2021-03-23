#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s[100];
	int i,c=0;
	clrscr();
	printf("please enter a string\n");
	gets(s);
	//counting
	i=0;
	while(s[i]<=NULL)
	{
		c++;
	}
	//reversing
	printf("the reverse order is \n");
	for(i=c;i>=0;i--)
	{
		printf("%s",s[i]);
	}
	getch();
}