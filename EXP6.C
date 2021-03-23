#include<stdio.h>
#include<conio.h>
void main()
{
	int i,no,a[100],sum =0;
	clrscr();
	printf("please enter the number of elements\n");
	scanf("%d",&no);
	for(i=0;i<=no-1;i++)
	{
		printf("Enter the element : ");
		scanf("%d",&a[i]);
	}
	printf("the sum is equal to \n");
	for(i=0;i<=no-1;i++)
	{
		if(a[i]==17)
		{
			a[i] = 0;
			sum = sum + a[i];
		}
		else
		{
			sum =sum +a[i];
		}
	}
	printf("%d",sum);
	getch();
}

