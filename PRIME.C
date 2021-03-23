#include<stdio.h>
#include<conio.h>
void check(int);
void main()
{
	int x;
	clrscr();
	printf("Please enter a number \n");
	scanf("%d",&x);
	if(x==1||x==0||x==2||x==3||x==5||x==7)
	{
		printf("prime number\n");
	}
	else
	{
		check(x);
	}
	getch();
}

void check(int x)
{
	if(x%2==0||x%3==0||x%5==0||x%7==0)
	{
		printf("not a prime number\n");
	}
	else
	{
		printf("prime number\n");
	}
}
