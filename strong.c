#include<stdio.h>

void main()
{
    int i,j,k,n1,n2,n3,sum=0,p,q,r,f=1,fact;
    printf("Please Enter Three Numbers\n");
    scanf("%d",&n1);
    k = n1;
    while(k!=0)
    {
        j = k%10;
        f= 1;
        while(j!=0)
        {
            f = f*j;
            j--;
        }
        printf("%d\n",f);
        sum = sum + f;
         k = k/10;
    }
    if(sum==n1)
    {
        printf("Strong Number");
    }
    else
    {
        printf("Not a Strong Number");
    }
}