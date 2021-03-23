//Program to find Harshad Number

#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void main()
{
    int i,j,k,m,n,p,q,r,a[100];
    printf("Please Enter a Number : ");
    scanf("%d",&n);
    
    //splitting every digit of the Number
    
    i=0;
    p = 0;
    m =n;
    while(n!=0)
    {
        a[i] = n%10;
        i++;
        n = n/10;
    }
    
    //adding the digits in the Number
        
    for(j=0;j<=i-1;j++)
    {
        p = p + a[j];
    }
    
    if(m%p==0)
    {
        printf("Harshad Number");
    }
    else
    {
        printf("Not Harshad Number");
    }
    getch();
}