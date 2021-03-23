#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,d,r=0,c=0;
	clrscr();
	printf("Please Enter a Number \n");
	scanf("%d",&n);
	printf("The Binary form of the Number is :\n");
	if(n%2!=0)
	{
		while(n!=0)
		{
			i = n % 2;
			r = r*10 + i;
			n = n/2;
		}
		printf("%d",r);
	}
	else
	{
		 while(n!=0)
		 {
			i = n % 2;
			if(n%2==0)
			{
				n = n/2;
				c++;
			}
			else
			{
				r = r*10 + i ;
				n = n/2;
			}
		 }
		 printf("%d",r);
		 while(c!=0)
		 {
			printf("0");
			c--;
		 }

	}
	getch();
}
