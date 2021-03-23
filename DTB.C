#include<stdio.h>
#include<conio.h>

void main()
{
	int bin[100],num,i=0,j;
	clrscr();
	printf("Please enter the decimal number\n");
	scanf("%d",&num);

	//converting
	while(num>0)
	{
		bin[i] = num %2 ;
		num = num/2;
		i++;
	}
	//printing
	printf("The equivalent decimal number is \n");
	for(j=i-1;j>=0;j--)
	{
		printf("%d",bin[j]);
	}
	getch();
}
