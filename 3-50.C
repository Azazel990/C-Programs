#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a,i,j,k;
	clrscr();
	printf("Please Enter the number of lines \n");
	scanf("%d",&n);
	printf("Here is the following pattern\n");
	for(i=1,k=5;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",k);
		}
		printf("\n");
		k--;
	}
	getch();
}