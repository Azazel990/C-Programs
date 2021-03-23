#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a,i,j,k;
	clrscr();
	printf("Please Enter the number of lines \n");
	scanf("%d",&n);
	printf("Here is the following pattern\n");
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			for(j=1;j<=i;j++)
			{
				printf("%d",j);
			}
		}
		else
		{
			for(j=i;j>=1;j--)
			{
				printf("%d",j);
			}
		}
		printf("\n");
	}

	getch();
}