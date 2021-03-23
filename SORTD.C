#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],n,i;
	void sort(int a[],int n);
	clrscr();
	printf("Please Enter the number of elements \n");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter a Value : ");
		scanf("%d",&a[i]);
	}
	sort(a,n);
	getch();
}
void sort(int a[],int n)
{
	int j,i,temp;
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-2;j++)
		{
			if(a[j]<a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("Ascending Order\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%d\n",a[i]);
	}
}