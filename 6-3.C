#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a[100],e=0,o=0;
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
		if(a[i]%2==0)
		{
			e++;
		}
		else
		{
			o++;
		}
	}
	printf("The above array has: \n %d = Even \n %d = ODD ",e,o);
	getch();
}