#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,k,l,m,n1,n2,a[100],b[100],l1,l2;
    int sum1=0 , sum2=0; 
    printf("PLease Enter the numbers : ");
    scanf("%d%d",&n1,&n2);
    
    i=1;
    j=1;
    m=0;
    k=0;
    
    //Retriving the factors of the two numbers in two arrays
    while((n1/2+1)!=i)
    {
        if(n1%i==0)
        {
            a[m] = i;
            printf("%d\n",a[m]);
            m++;
        }
        i++;
    }
    
    while((n2/2+1)!=j)
    {
        if(n2%j==0)
        {
            b[k] = j;
             printf("%d\n",b[k]);
            k++;
        }
        j++;
    }
    

    //Calculating the sum of both arrays
    
    for(i=0;i<m;i++)
    {
        sum1 = sum1 + a[i];
    }
    for(j=0;j<k;j++)
    {
        sum2 = sum2 + b[j];
    }
   
    printf("sum1 = %d\n",sum1);
     printf("sum2 = %d\n",sum2);
   
    if(sum1==n2&&sum2==n1)
    {
        printf("Friendly Pairs"); 
    }
    else
    {
        printf("Non Friendly Pairs");
    }
    getch();
}