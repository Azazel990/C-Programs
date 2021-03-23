#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	char c;
	int x,y;
	float f;
	clrscr();
	printf("Enter a number\n");
	scanf("%d",&x);
	c = (char)x;
	printf("%c",c);
	getch();
}
