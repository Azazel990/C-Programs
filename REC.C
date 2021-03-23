#include<stdio.h>
#include<conio.h>

int fun(int,int);
int a,b=1,c;
void main()
{
	int n;
	clrscr();
	printf("Please Enter a Number : ");
	scanf("%d",&n);
	fun(b,n);
	getch();
}

int fun(int b,int n)
{
	if (b!=n)
	{
		printf("%d\n",b);
		b++;
		fun(b,n);
	}
	else 
	{
	    printf("%d\n",b);
	    return 0;
    }
    return 0;
}