#include<stdio.h>

void main()
{
    int i,j,k,n1,n2,n3,sum=0;
    printf("Please Enter Three Numbers\n");
    scanf("%d",&n1);
    i=1;
    while(i<n1)
    {
        if(n1%i==0)
        {
            sum = sum + i;
            i++;
        }
        else
        {
            i++;
        }
    }
    printf("%d\n",sum);
    if(sum==n1)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not a Perfect Number");
    }
}