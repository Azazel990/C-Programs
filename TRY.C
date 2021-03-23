#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char hex[100];
	int num,i=0;
	clrscr();
	printf("Please enter the decimal number \n");
	scanf("%d",&num);

	while(num>0)
	{
		hex[i] =(char)num %16 ;
		if(hex[i]==10)
		{
			hex[i]='A';
		}
		else if(hex[i]==11)
		{
			hex[i]='B';
		}
		else if(hex[i]==12)
		{
			hex[i]='C';
		}
		else if(hex[i]==13)
		{
			hex[i]='D';
		}
		else if(hex[i]==14)
		{
			hex[i]='E';
		}
		else if(hex[i]==15)
		{
			hex[i]='F';
		}
		else
		{
			num = num/16;
			i++;
		}
	}
	strrev(hex);
	printf("The hexadecimal Equivalent is \n");
	puts(hex);
	getch();
}