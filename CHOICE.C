#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,r;
	float f;
	char c ;
	clrscr();
	printf("Please Enter any two number\n");
	scanf("%d%d",&n1,&n2);
	printf("Please choose one Operation\n + Addition \n - Subtraction\n * Multiplication\n / Divide \n % Modulus\n ");
	c = getche();
	printf("\n");
	switch(c)
	{
		case '+' : r = n1 + n2;
		printf("Addition = %d",r);
		break;
		case '-' : r = n1 - n2;
		printf("Subtraction = %d",r);
		break;
		case '*' : r = n1 * n2;
		printf("MUltiplication = %d",r);
		break;
		case '/' : f = n1 / n2;
		printf("Division = %f",f);
		break;
		case '%' : r = n1 % n2;
		printf("Modulus = %d",r);
		break;
	}
	getch();
}