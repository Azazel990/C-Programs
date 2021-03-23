//defination of isdigit();

#include<stdio.h>
#include<conio.h>
#include<string.h>

int isdigit(char);

void main()
{
	int x,y,z;
	char c,s[100];
	//clrscr();
	printf("Please Enter a character ; ");
	scanf("%c",&c);

	x = isdigit(c);
	printf("%d\n",x);
	getch();
}

int isdigit(char c)

{
	int i,j,k;
	i = (int)c;
	printf("%d\n",i);
	if(i>=48&&i<=57)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}