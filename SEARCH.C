#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],s,n,b,c,i;
	clrscr();
	printf("Please enter the number of elements\n");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter a number : ");
		scanf("%d",&a[i]);
	}
	printf("Please Enter the number to be searched \n");
	scanf("%d",&s);
	for(i=0;i<=n-1;i++)
	{
		if(s==a[i])
		{
			printf("The element was found at index : %d",i);
			break;
		}

	}

	getch();
}


