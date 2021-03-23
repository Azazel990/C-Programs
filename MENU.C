#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a,b,c,r;
	float f;
	clrscr();
	printf("Please Enter Any two Numbers\n");
	scanf("%d%d",&a,&b);
	while(c!=6)
	{
		printf("Choose the operation\n 1.Addidtion\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Modulus\n 6.STOP\n");
		scanf("%d",&c);
	switch(c)
	{
		case 1 : r=a+b;
		printf("Addition = %d\n",r);
		break;
		case 2 : r=a-b;
		printf("Subtraction = %d\n",r);
		break;
		case 3 : r=a*b;
		printf("Multiplication = %d\n",r);
		break;
		case 4 : f= a/b;
		printf("division = %f\n" ,f);
		break;
		case 5 : r = a%b ;
		printf("Modulus = %d\n",r);
		break ;
		case 6 : break;
		default : printf("Invalid Option\n");
	}
    }

}
