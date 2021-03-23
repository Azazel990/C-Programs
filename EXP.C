#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50],s,n,i,temp,count=0;
	clrscr();
	printf("PLease enter the number of elements\n");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter a number : ");
		scanf("%d",&a[i]);
	}
	printf("original array : \n");
	for(i=0;i<=n-1;i++)
	{
		printf("%d\n",a[i]);
	}
	//sorting
    while(count!=n-1)
    {
	for(i=0;i<=n-1;i++)
	{
		if(a[i]==0)
		{
			temp = a[i];
			a[i] = a[i-1];
			a[i-1] = temp;
		}
	}
	count++;
    }
	printf("new array \n");
	for(i=0;i<=n-1;i++)
	{
		printf("%d\n",a[i]);
	}
	 getch();
}