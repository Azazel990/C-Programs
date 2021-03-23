#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a[100],rev[100],j;
	clrscr();
	printf("Enter the no of elements\n");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter a Number : ");
		scanf("%d",&a[i]);
	}
	for(i=n-1,j=0;i>=0;i--,j++)
	{
		rev[j] = a[i];

	}
	printf("The reverse order is \n");
	for(j=0;j<=n-1;j++)
	{
		printf("%d\n",rev[j]);
	}


	getch();
}


