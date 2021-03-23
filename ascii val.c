#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void main()
{
    char c;
    int x,y,z;
    printf("Please ENter the CHaracter : ");
    scanf("%c",&c);
    x = (int)c;
    printf("The ascii vlaue of the Character is : %d",x);
    getch();
}