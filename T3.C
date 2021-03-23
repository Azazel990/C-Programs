#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	int r,n;
	clrscr();
	printf("Please Enter a Number\n");
	scanf("%d",&n);
	r = insalnum(n);
	printf("The absolute value is equal to : \n %d",r);
	getch();
}