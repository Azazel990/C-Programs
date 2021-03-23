#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a[100],i,m;
	clrscr();
	printf("Please Enter the number of elements \n");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter a value : ");
		scanf("%d",&a[i]);
	}
	printf("Please Enter the number to be searched \n");
	scanf("%d",&m);
	for(i=0;i<=n-1;i++)
	{
		if(m==a[i])
	       {	printf("number found at %d ",i);
			}
			else
			continue;
	}
	getch();
}


