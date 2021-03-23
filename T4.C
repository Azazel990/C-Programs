#include<stdio.h>
#include<conio.h>
int add(int a,int b)
{
	return(a+b);
}
int sub(int a,int b)
{
	return(a-b);
}
int mul(int a,int b)
{
	return(a*b);
}
int div(int a,int b)
{
	return(a/b);
}
int mod(int a,int b)
{
	return(a%b);
}
void main()
{
	int n1,n2,result,choice;
	clrscr();


		printf("Enter any two Numbers\n");
		scanf("%d%d",&n1,&n2);
	do
	{
		printf("Choose the operation\n 1.Addidtion\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Modulus\n 6.STOP\n");
		scanf("%d",&choice);
		switch(choice)
	{
		case 1 :
		printf("Addition = %d\n",add(n1,n2));
		break;
		case 2 :
		printf("Subtraction = %d\n",sub(n1,n2));
		break;
		case 3 :
		printf("Multiplication = %d\n",mul(n1,n2));
		break;
		case 4 :
		printf("division = %d\n" ,div(n1,n2));
		break;
		case 5 :
		printf("Modulus = %d\n",mod(n1,n2));
		break ;
		case 6 : break;
		default : printf("Invalid Option\n");
	}
}while(choice!=6);

	}