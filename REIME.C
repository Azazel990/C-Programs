#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y=0,z;
	clrscr();
	printf("Please enter a number \n");
	scanf("%d",&x);
	if(x%2==0||x%3==0||x%5==0)
	{
		 y++;
	}
	if(y==0)
	{
		printf("Prime number\n");
	}
	else
	{
		printf("Not a prime number\n");
	}
	getch();
}