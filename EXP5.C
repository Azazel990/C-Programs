#include<stdio.h>
#include<conio.h>
void main()
{
	int i,no,a[100],temp,last;
	clrscr();
	printf("please enter the number of elements\n");
	scanf("%d",&no);
	for(i=0;i<=no-1;i++)
	{
		printf("Enter the element : ");
		scanf("%d",&a[i]);
	}
	//swap
		last = a[0];
		for(i=no-1;i>=0;i--)
		{
			temp = a[i];
			a[i] = a[no-1];
			a[no-1] = temp;
		}
		a[no-1] = last;
		printf("New array\n");
	for(i=0;i<=no-1;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
}


