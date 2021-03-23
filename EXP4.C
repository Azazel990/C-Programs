#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[100],n,sum=0;
	clrscr();
	printf("please enter the number of elements \n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("Enter the elemnets : ");
		scanf("%d",&a[i]);
	}
	printf("the odd numbers are\n");
	for(i=0;i<=n;i++)
	{
		if(a[i]%2!=0)
		{
			printf("%d\n",a[i]);
			sum =sum +a[i];
		}
	}
	printf("the sum is : %d",sum);
	getch();
}
