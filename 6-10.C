#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a[100],temp,j;
	clrscr();
	printf("Enter the no of elements\n");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter a Number : ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<=0.5*(n-1);i++)
	{
	      temp = a[n-i-1];
	      a[n-i-1] = a[i];
	      a[i] = temp;
	}
	printf("The reverse order is \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
}