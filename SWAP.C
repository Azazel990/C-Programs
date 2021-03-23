#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("Please Enter any two values\n");
	scanf("%d%d",&a,&b);
	printf("Values Before Swapping \n a = %d \n b = %d\n",a,b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("Values After Swapping\n a = %d \n b = %d",a,b);
	getch();
	}
