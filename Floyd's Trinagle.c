#include<stdio.h>

void main()
{
    int i,j,k,n1,n2,n3;
    printf("Please Enter Three Numbers\n");
    scanf("%d",&n1);
    
    for(i=1;i<=n1;i++)
    {
         for(j=1;j<=i;j++)
         {
            if(i%2!=0)
            {
                if(j%2!=0)
                {
                    printf("1");
                }
                else
                {
                    printf("0");
                }       
            }
            else
            {
                if(j%2!=0)
                {
                    printf("0");
                }
                else
                {
                    printf("1");
                }
                    
            }
         }
        printf("\n");
    }
}