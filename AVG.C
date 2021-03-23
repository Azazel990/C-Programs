#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,s = 0,a[100];
	float avg;
	clrscr();
	printf("Enter the no of elements\n");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter a Number : ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		s = s + a[i];
	}

	printf("%d\n",s);
	avg = s;
	avg = avg/n;
	printf("Average = %f",avg);
	getch();
}