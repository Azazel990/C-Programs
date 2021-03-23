#include<stdio.h>
#include<conio.h>
void main()
{
	int m,n,i,j,a[10][10] ,c;
	clrscr();
	printf("Please Enter the matrix \n");
	printf("Enter the number of row and column\n");
	scanf("%d%d",&m,&n);
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			printf("Enter the Number : ");
			scanf("%d",&a[i][j]);
		}
	}
	printf("The original Matrix \n");
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
		if(i==1)
		break;
		for(j=0;j<=n-1;j++)
		{
		      c = a[i][j];
		      a[i][j]=a[j][i];
		      a[j][i]=c;
		}
	}
	c= a[1][2];
	a[1][2]=a[2][1];
	a[2][1]=c;
	printf("The transpose Matrix \n");
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{

			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	getch();
	}