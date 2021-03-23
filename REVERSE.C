#include<stdio.h>
#include<conio.h>
void main()
{
	int num ,reverse ;
	int rev(int num);
	clrscr();
	printf("Please Enter any number");
	scanf("%d",num);
	reverse = rev(num);
	printf("The reverse of the number = %d ",reverse);
	getch();
}
	int rev(int num)
	{
		int sum,r;
		if(num)
		{
			r= num%10;
			sum = sum*10 + r;
			rev(num/10);
		}

		else
		{
			return 0 ;
		}
		return sum;
	}
