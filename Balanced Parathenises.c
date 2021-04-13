//Program to check balanced parathensies....

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define max 100

int stack[max],top = -1;

void main()
{
    char c,x;
    printf("PLease Enter the pattern : \n");
    
    while((x = getchar())!='\n')
    {
        if(x=='(')
        {
            stack[++top] = x; 
        }
        else if(x==')')
        {
            top--;
        }
        else
        {
            printf("Invalid Character\n");
            exit(0);
        }
    }
    
    if(top < 0)
    {
        printf("Balanced\n");
    }
    else
    {
        printf("Unbalanced\n");
    }
}