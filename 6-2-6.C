#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],i,j,m,n;
	void transpose(int a[10][10],int m,int n);
	clrscr();
	printf("Please Enter the number of rows/columns\n");
	scanf("%d",&m);
	n = m;
	printf("Please enter the matrix \n");
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			printf("Enter an element : ");
			scanf("%d",&a[i][j]);
		}
	}
	printf("The original matrix is : \n");
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			printf("%d\t",a[i][j]);

		}
		printf("\n");
	}
	transpose(a,m,n);
	getch();
}

void transpose(int a[10][10],int m,int n)
{
	int b[10][10],i,j;
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			b[j][i] = a[i][j] ;
		}
	}
	printf("The Transpose of the matrix is : \n");
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			printf("%d\t",b[i][j]);

		}
		printf("\n");
	}
}