#include<stdio.h>
#include<conio.h>
void main()
{
	int r1,r2,n1,n2;
	int gcd(int n1,int n2);
	int lcm(int n1,int n2);
	clrscr();
	printf("Please enter Two Numbers\n");
	scanf("%d%d",&n1,&n2);
	r1 = gcd(n1,n2);
	printf("The GCD of the two Numbers is : %d",r1);
	r2 = lcm(n1,n2);
	printf("The LCM of the two Number is  : %d",r2);
	getch();
}
	int gcd(n1,n2)
	{
		int gcd;
		if(n1<n2)
		{
			n1=gcd;
		}
		else
		{
			n2=gcd;
		}
		while(n1%gcd!=0||n2%gcd!=0)
		{
			gcd-- ;
		}
		return gcd;
	}
	int lcm(n1,n2)
	{
		int lcm;
		if(n1>n2)
		{
			n1=lcm;
		}
		else
		{
			n2=lcm;
		}
		while(n1%lcm!=0||n2%lcm!=0)
		{
			lcm++;
		}
		return lcm;
	}
