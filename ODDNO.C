#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,c;
	clrscr();
	printf("Please Enter a number \n");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		c = 2*i +1;
		printf("%d\n",c);
	}
	getch();
}