//Check Character or not

#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void main()
{
    char c;
    printf("Please ENter the CHaracter : ");
    scanf("%c",&c);
    if(isalpha(c))
    {
        printf("It is a CHaracter");
    }
    else {
        printf("Not a CHaracter");
    }
    getch();
}