#include<stdio.h>
#include<conio.h>
void main()
{
	int t=0,n,i=3;
	clrscr();
	again:
	printf("Enter a Number:\n");
	scanf("%d",&n);
	t=t+n;
	i--;
	if(i!=0)
	goto again;
	printf("Total = %d",t);
	getch();
}

