#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,r;
	char c ;
	float f;
	clrscr();
	printf("Please Enter Any two Numbers\n");
	scanf("%d%d",&a,&b);
	printf("Choose the operation\n + Addidtion\n - Subtraction\n * Multiplication\n / Division\n % Modulus\n");
	c = getche();
	printf("\n");
	switch(c)
	{
		case '+' : r=a+b;
		printf("Addition = %d",r);
		break;
		case '-' : r=a-b;
		printf("Subtraction = %d",r);
		break;
		case '*' : r=a*b;
		printf("Multiplication = %d",r);
		break;
		case '/' : f= a/b;
		printf("division = %f" ,f);
		break;
		case '%' : r = a%b ;
		printf("Modulus = %d",r);
		break ;
		default : printf("Invalid Option");
	}
	getch();
}