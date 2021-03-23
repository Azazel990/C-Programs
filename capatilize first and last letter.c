//Program to capatilize the first and last letter in a string 

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

	//removing spaces
	for(i=0;i<=strlen(s);i++)
	{

        if(i==0||i==strlen(s)-1)
	      if(islower(s[i]))
	      {
		        s[i] = toupper(s[i]);     
		  }
	}
	printf("The resulting string is : ");
	puts(s);
	getch();
}