//Program to find if the character is Alphabet Without Using ctype

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,k;
    char c;
    printf("Please Enter a Character : ");
    scanf("%c",&c);
    
    i = (int)c;
    if(i>=65&&i<=90)
    {
        printf("Alphabet");
    }
    else if(i>=97&&i<=122)
    {
        printf("Alphabet");
    }
    else
    {
        printf("Not an Alphabet");
    }
    getch();
}