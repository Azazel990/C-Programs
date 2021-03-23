//Program to remove characters in a string except alphabets

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>


void main()
{
	int i,j,k;
	char s[100];
	//clrscr();
	printf("Please Enter the String : ");
	gets(s);

	//removing spaces
	for(i=0;s[i]!=NULL;i++)
	{

	      if(ispunct(s[i]))
	      {
		        j = i;
        		while(s[j]!=NULL)
        		{
        			s[j] = s[j+1] ;
        			j++;
        			puts(s);
        			printf("\n");
        		}

	      }
	}
	printf("The string without characters is : ");
	puts(s);
	getch();
}