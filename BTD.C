#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int x=0,y,z,n,i,bin[100],j;
	clrscr();
	printf("please enter the number of digits in binary code \n");
	scanf("%d",&n);
	printf("please enter the binary code\n");
	for(i=0;i<=n-1;i++)
	{
		printf("Enter one byte : ");
		scanf("%d",&bin[i]);
	}
	for(i=n-1,j=0;i>=0;i--,j++)
	{
	       x = x + bin[i]*pow(2,j);
	}
	printf("The decimal number of the code is %d",x);
	getch();
}