//Program to find Triplets

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,k,n,l,s,a[100],e,o,m;
    printf("Please Enter the number of elements : ");
    scanf("%d",&n);
    
    //accepting the array
    
    for(i=0;i<=n-1;i++)
    {
        printf("Enter a Number : ");
        scanf("%d",&a[i]);
    }
    
    //accepting Sum
    printf("Please Enter a Sum : ");
    scanf("%d",&s);
    
    
    //Finding Triplets
    
    for(i=0;i<=n-3;i++)
    {
        for(j=i+1;j<=n-2;j++)
        {
            for(k=j+1;k<=n-1;k++)
            {
                if(a[i] + a[j] + a[k] == s)
                {
                    printf("%d + %d + %d = %d\n",a[i],a[j],a[k],s);
                }
            }
        }
    }
   
   
    getch();
}