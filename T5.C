#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a,b,i=0,j=0;
	float no;
	clrscr();
	printf("PLease Enter a Number \n");
	scanf("%f",&no);
	a=(int)no;
	b = a;
	while(a!=0)
	{
		a = a/10;
		i++;
	}
	while(b%10!=0)
	{
		no = no*10;
		b =(int)no;
		if(b%10==0)
		{
			j--;
			break;
		}
		else
		{
			j++;
		}
	}

	printf("Before decimal = %d\n",i);
	printf("After decimal = %d\n",j);
	getch();
}