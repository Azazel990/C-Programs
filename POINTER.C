#include<stdio.h>
#include<conio.h>

int swap(int*,int*);
int multiply(int [],int);
void main()
{
	int x,y,z[100],m,n,o,i,j,a,b,c;
	int *p,*q;
	clrscr();
	printf("PLease Enter the number of elements : ");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&z[i]);
	}
	//printf("PLease Enter the values of x & y : ");
	//scanf("%d%d",&x,&y);
	//p = &x;
	//q = &y;
       //	swap(&x,&y);
       //	printf("The values in the main function are :\nx -> %d\ny -> %d\n",x,y);
       multiply(z,n);
       for(i=0;i<=n-1;i++)
       {
		printf("z[%d] = %d\n",i+1,z[i]);
       }
	getch();
}

int  swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	printf("The values in the swap function are : \nx -> %d\ny-> %d\n",*a,*b);
	return 0;
}
int multiply(int k[],int n)
{
	int i,j;
	for(i=0;i<=n-1;i++)
	{
	       k[i] = k[i]*2;
	}
	return 0;
}
