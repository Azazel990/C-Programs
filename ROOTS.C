#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,b,c;
	float r1,r2;
	clrscr();
	printf("Enter the coefficients of the quadratic equation :\n");
	scanf("%d%d%d",&a,&b,&c);
	r1 =( -b + pow((b*b-4*a*c),0.5))/(2*a);
	r2 =( -b - pow((b*b-4*a*c),0.5))/(2*a);
	printf("The roots are : \n r1 = %f \n r2 = %f",r1,r2);
	getch();
}



