//Program to find abundant number 
#include<stdio.h>

void main()

{
    int n,i,j,k,arr[100],sum=0;
    printf("Please Enter the value of n : \n");
    scanf("%d",&n);
    
    i = 0;
    j = 1;
    //collecting all divisors
    while(j<n)
    {
        if(n%j==0)
        {
            arr[i] = j;
            i++;
        }
        j++;
    }
    
    //adding all the divisors
    for(j=0;j<=i-1;j++)
    {
        sum = sum + arr[j];
    }
    
    if(n < sum)
    {
        printf("Abundant number");
    }
    else
    {
        printf("Non abundant number");
    }
}