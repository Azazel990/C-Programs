#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,f;
	clrscr();
	printf("Please Enter a Number\n");
	scanf("%d",&n);
	printf("The Factorial of the number is : ");
	for(i=1,f=1;i<=n;i++)
	{
		f = f * i ;
	}
	printf("%d",f);
	getch();
	}