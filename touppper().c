//defination of toupper();

#include<stdio.h>
#include<conio.h>
#include<string.h>

int toupper1(int);

void main()
{
	int x,y,z;
	char c,s[100],a,b;
//	clrscr();
	printf("Please Enter a character : ");
	scanf("%c",&c);

    y = (int)c;
	x = toupper1(y);
	if(x==0)
	{
	    printf("%c\n",c);
	}
	else
	{
	    a = (char)x;
	    printf("%c\n",a);
	}
	getch();
}

int toupper1(int y)

{
	int i,j,k;
	//i = (int)c;
    
    if(y>=97&&y<=122)
    {
        k = y - 32;
        return k;
    }
    else
    {
        return 0;
    }
}