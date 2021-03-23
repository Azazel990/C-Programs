//Total Number of Handshakes?

#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void main()
{
    int i,j,k,m,n,p,q,r,a[100];
    printf("Please Enter a Number of Students : ");
    scanf("%d",&n);
    
    r = 0;
    
    while(n!=0)
    {
        n = n - 1;
        r = r + n;
    }
    printf("Total Number of Handshakes = %d",r);
   
    getch();
}