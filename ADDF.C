#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,sum;
	int add(int a ,int b);
	clrscr();
	printf("Please Enter any tow Numbers \n");
	scanf("%d%d",&n1,&n2);
	sum = add(n1,n2);
	printf("The Sum of the Numbers is : %d",sum);
	getch();
}
	int add(int a ,int b)
	{
		int c ;
		c = a + b ;
		return c;
	}