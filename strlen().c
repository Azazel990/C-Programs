//Defination of strlen()

#include<stdio.h>
#include<conio.h>

int strlen1(char []);

void main()
{
    int x,y,z;
    char s[100],c;
    printf("Please Enter a String : ");
    gets(s);
    
    x = strlen1(s);
    
    printf("Length = %d",x);
    getch();
}

int strlen1(char s[])
{
    int i,j,k;
    j=0;
    for(i=0;s[i]!=NULL;i++)
    
    {
        j++;
    }
    
    return j;
}