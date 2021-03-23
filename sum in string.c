//Program to count the sum of digits in a string 

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>


void main()
{
	int i,j,k,r;
	char s[100];
	//clrscr();
	printf("Please Enter the String : ");
	gets(s);

    r= 0;
	//removing spaces
	for(i=0;s[i]!=NULL;i++)
	{

	      if(isdigit(s[i]))
	      {
		       
		       r = r + s[i] - 48;
		       
	      }
	}
	printf("The sum of digits in a string is : %d ",r);
	getch();
}