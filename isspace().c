//defination of isspace();

#include<stdio.h>
#include<conio.h>
#include<string.h>

int isspace(char []);

void main()
{
	int x,y,z;
	char c,s[100];
	//clrscr();
	printf("Please Enter a String : ");
	gets(s);

	x = isspace(s);
	printf("%d\n",x);
	getch();
}

int isspace(char s[])

{
	int i,j,k;
	j= 0;
	for(i=0;s[i]!=NULL;i++)
	{
	    if(s[i]==' '||s[i]=="\n"||s[i]=="\t")
	    {
	        j = 1;
	    }
	}
	if(j==1)
	{
	    return  1;
	}
	else
	{
	    return 0;
	}
}