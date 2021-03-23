#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	void fibo(int n);
	clrscr();
	printf("Enter a number\n");
	scanf("%d",&n);
	fibo(n);
	getch();
}
void fibo(int n)
{
	int a =0 ,b =1 ,c,i;
		printf("fibo series : \n 0 \n 1 \n");
	for(i= 1;i<=n-2;i++)
	{
		c = a + b ;
		printf("%d\n",c);
		a = b;
		b = c;
	}
}