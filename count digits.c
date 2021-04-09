//Program to Count the number of digits
#include<stdio.h>

void main()

{
    int n,i,j,k;
    printf("Please Enter a number : \n");
    scanf("%d",&n);
    
    j=0;
    while(n!=0)
    {
        n = n/10;
        j++;
    }
    printf("Number of Digits = %d",j);
}