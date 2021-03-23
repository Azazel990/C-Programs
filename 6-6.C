#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a[100],l;
	clrscr();
	printf("Enter the no of elements\n");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter a Number : ");
		scanf("%d",&a[i]);
	}
	l = a[0];
	for(i=1;i<=n-1;i++)
	{
		if(l<a[i])
		{
			l = a[i];
		}
		else
		continue;
	}
	printf("the Largest Number is = %d ",l);
	getch();
}