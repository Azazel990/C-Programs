#include<stdio.h>
#include<conio.h>
int add(int*,int);
int del(int*,int);
void main()
{
	int x,y,z,a[100],i,item,ditem;
	clrscr();
	printf("PLease enter the 3 elments\n");
	for(i=0;i<=2;i++)
	{
		printf("Enter the element : ");
		scanf("%d",&a[i]);
	}
	printf("The OG array\n");
	for(i=0;i<=2;i++)
	{
		printf("%d\n",a[i]);

	  }
	printf("Please ENter the new element \n");
	scanf("%d",&item);
	add(a,item);
	printf("enter the index to be deleted\n");
	scanf("%d",&ditem);
	del(a,ditem);
	getch();
}
int add(int *a,int item)
{
	int i;
	a[3]=item;
	printf("THe new array is \n");
	for(i=0;i<=3;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
int del(int* a,int ditem)
{
	int i;
	printf("After deletion \n");
	for(i=0;i<=3;i++)
	{
		if(i==ditem)
		{
			continue;
		}
		else
		{
			printf("%d\n",a[i]);
		}
	}
	return 0;
}



