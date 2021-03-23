#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,k,l,m,n;
    printf("PLease Enter the number : ");
    scanf("%d",&n);
    
    m=0;
    i=2;
    while(i<n)
    {
        if(n%i==0)
        {
           m=1;
        }
        i++;
    }
    if(m==1)
    {
         printf("Non Prime Number");
    }
    else
    {
        printf("Prime Number");
    }
}