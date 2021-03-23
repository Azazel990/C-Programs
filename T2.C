#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	double x,r1,r2;
	clrscr();
	printf("Please enter a Number\n");
	scanf("%lf",&x);
	r1 = ceil(x);
	printf("ceil is equal to \n");
	printf("%lf\n",r1);
	r2 = floor(x);
	printf("floor is equal to \n");
	printf("%lf",r2);
	getch();
}

