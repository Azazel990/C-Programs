#include<stdio.h>

void main()
{
    int i,j,k,n1,n2,n3,sum=0,p,q,r[100],f=0,fact,n;
    printf("Please Enter  a Number\n");
    scanf("%d",&n);
    i=0;
    p = 1;
    q = 1;
    while(p<n)
    {
        q= 2;
        f= 0;
        while(q<p)
        {
            if(p%q==0)
            {
                f=1; 
            }
            q++;
        }
        if(f!=1)
        {
            r[i] = p;
            i++;
        }
        p++;
    }
    
    for(j=0;j<=i-1;j++)
    {
        n1 = r[j];
        for(k=j+1;k<=i-1;k++)
        {
            n2 = r[k];
            if(n1+n2==n)
            {
                printf("%d + %d = %d\n",n1,n2,n);
            }
        }
    }
}