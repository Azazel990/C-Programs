//defination of islower();

#include<stdio.h>
#include<conio.h>
#include<string.h>

int islower(char);

void main()
{
	int x,y,z;
	char c,s[100];
//	clrscr();
	printf("Please Enter a character : ");
	scanf("%c",&c);

	x = islower(c);
	printf("%d\n",x);
	getch();
}

int islower(char c)

{
	int i,j,k;
	i = (int)c;
	
    if(i>=97&&i<=122)
	{
		return 1;
	}
	else
	{
	    return 0;
	}
}