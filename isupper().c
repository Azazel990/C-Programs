//defination of isupper();

#include<stdio.h>
#include<conio.h>
#include<string.h>

int isupper(char);

void main()
{
	int x,y,z;
	char c,s[100];
//	clrscr();
	printf("Please Enter a character : ");
	scanf("%c",&c);

	x = isupper(c);
	printf("%d\n",x);
	getch();
}

int isupper(char c)

{
	int i,j,k;
	i = (int)c;
	
    if(i>=65&&i<=90)
	{
		return 1;
	}
	else
	{
	    return 0;
	}
}