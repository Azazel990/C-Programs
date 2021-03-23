#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("Please Enter a Number \n");
	scanf("%d",&n);
	printf("The Multiplication Table : \n");
	for(i= 1;i<=10;i++)
	{
		printf(" % d X %d = %d\n ",n,i,n*i);
	}
	getch();
}
