#include<stdio.h>
#include<conio.h>
void main()
{
	int no,i=1,r,sum=0;
	clrscr();
	 printf("Please Enter a number and its exponential\n");
	scanf("%d",&no);
	while(no!=i)
	{
	      if(no%i==0)
	      {
		sum = sum + i;
		}
		i++;
	}
	if(sum==no)
	{
		printf("It is a Perfect number\n");
	}
	else
	{
		printf("it is not a perfect number\n");
	}
	getch();
}


