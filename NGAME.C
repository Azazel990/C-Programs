#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,j,k,a[100],turn=0;
	clrscr();
	printf("PLease Enter the Numbers of integers ob the table \n");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter digit %d : ",i+1);
		scanf("%d",&a[i]);
	}
	if(n==1)
	{
		printf("Aaman Wins\n");
	}
	else if(turn%2==0)
	{

	}
	getch();
}