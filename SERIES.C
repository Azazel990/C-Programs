#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,r,n,sum=0;
	clrscr();
	printf("Please Enter the value of n : \n ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		r = pow(i,i);
		sum = sum + r;
	}
	printf("The sum of the following series is = %d",sum);
	getch();
}