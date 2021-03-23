#include<stdio.h>
#include<conio.h>
void main()
{
	int j,i,r1,r2,sum=0,no;
	clrscr();
	 printf("Please Enter the range : \n");
	scanf("%d%d",&r1,&r2);
	printf("The perfect number in the range are \n");
	for(i=r1;i<=r2;i++)
	{
		sum=0;
		j = 1;
	       while(i!=j)
	       {
			if(i%j==0)
			{
				sum = sum + j;
			}
			j++;

	       }
	       if(sum==i)
			{
				printf("%d\n",sum);
			}
	}
	getch();
}