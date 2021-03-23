#include<stdio.h>
#include<conio.h>
void main()
{
	int i , j, n, k;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
		{
			printf(" ");
		}
		for(j=1,k=5;j<=i;j++)
		{
			printf("%d",k--);
		}
		printf("\n");

	}
	getch();
}
