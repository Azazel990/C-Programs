#include<stdio.h>
#include<conio.h>
void main()
{
	int a,n,i=1;
	clrscr();
	printf("Please enter any Number\n");
	scanf("%d",&n);
	printf("The first %d Natural Numbers are : \n",n);
	while(i<=n)
	{
		printf("%d\n",i);
		i = i + 1;
	}
	getch();
	}

