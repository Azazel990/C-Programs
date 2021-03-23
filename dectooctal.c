#include<stdio.h>

void main()
{
    int i,j,k,n1,n2,n3,sum=0,p,q,r[100],f=1,fact;
    printf("Please Enter  a Number\n");
    scanf("%d",&n1);
    i=0;
    while(n1!=0)
    {
        r[i] = n1%8;
        i++;
        n1 = n1/8;
    }
    j = i-1;
    // printf("%d\n",j);
    while(j>=0)
    {
        printf("%d",r[j]);
        j--;
    }
   
}