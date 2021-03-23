#include<stdio.h>
#include<conio.h>
void main()
{
	int *p,i,a[10];
	clrscr();
	printf("Enter 10 numbers\n");
	for(i=0;i<=9;i++)
	{
		scanf("%d",(p+i));
	}
	printf("Heer is the print\n");
	for(i=0;i<=9;i++)
	{
		printf("%d\n",*(p+i));
	   }
      getch();
      }