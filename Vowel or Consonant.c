#include<stdio.h>
#include<conio.h>
void main()
{
    char c;
    printf("Please Enter an alphabet : \n");
    scanf("%c",&c);
    
    if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='o'||c=='O'||c=='u'||c=='U')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");   
    }
    getch();
}