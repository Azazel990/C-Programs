#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],s=0,i,j,r,m,n;
	clrscr();
	printf("Please Enter the number of rows/columns\n");
	scanf("%d",&m);
	n = m;
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			printf("Enter an element : ");
			scanf("%d",&a[i][j]);
		}
	}
	printf("The given matrix is  : \n");
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			printf("%d\t",a[i][j]);

		}
		printf("\n");
	}
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			if(i==j)
			{
				s = s + a[i][j];
			}
		}
	}
	printf("The sum of all diagonal elements is : %d",s);
	getch();
	}