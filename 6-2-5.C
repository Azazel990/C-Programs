#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10],i,j,r,m,n;
	clrscr();
	printf("Please Enter the number of rows/columns\n");
	scanf("%d",&m);
	n = m;
	printf("Please enter the first matrix \n");
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			printf("Enter an element : ");
			scanf("%d",&a[i][j]);
		}
	}
	printf("Please enter the second matrix \n");
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			printf("Enter an element : ");
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			c[i][j] = a[i][j] + b[i][j] ;

		}
	}
	printf("The addition of the two matrix is \n");
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	getch();
	}
