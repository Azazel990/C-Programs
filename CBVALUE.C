#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	void swap(int *p1,int *p2);
	clrscr();
	printf("Please Enter any two Variables\n");
	scanf("%d%d",&a,&b);
	printf("values before Swapping in main function\n a = %d \n b = %d\n ",a,b);
	swap(&a,&b);
	printf("values after Swapping in main function\n a = %d \n b = %d ",a,b);
	getch();
}
	void swap(int *p1,int *p2)
	{
		int temp;
		temp = *p2;
		 *p2 = *p1;
		 *p1 = temp;
		 printf("values after Swapping in swap function\n a = %d \n b = %d\n ",*p1,*p2);
	}