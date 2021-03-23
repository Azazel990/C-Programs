#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("Please Enter Your Marks\n");
	scanf("%d",&n);
	printf("Here is Your Grade\n");
	if(n==100)
	printf("Distinction");
	else
	switch(n/10)
	{
		case 0 :
		case 1 :
		case 2 :
		case 3 :
		printf("Fail");
		break;
		case 4 :
		printf("Pass Class" );
		break;
		case 5 :
		printf("Second Class");
		break ;
		case 6 :
		printf("First Class");
		case 7 :
		case 8 :
		case 9 :
		printf("Distinction");
		break;
		default : printf("Invalid Marks");
	}
	getch();
}