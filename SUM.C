#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum=0 ;
	clrscr();
	printf("Please Enter a Number\n");
	scanf("%d",&n);
	for(i = 0 ; i<=n-1;i++)
	{
		  sum = 2*i + 1;
	}
	printf("The sum is Equal to: \n %d",sum);
	getch();
	}