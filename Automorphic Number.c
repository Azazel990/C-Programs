//Program to find automorphic number 
#include<stdio.h>

void main()

{
    int n,i,j,k,arr[100],f=0,c,temp,n1,n2;
    printf("Please Enter the value of n : \n");
    scanf("%d",&n);
    
    k = n*n;
    temp =  n;
     c=0;
    //counting the number of digits 
    while(temp!=0)
    {
        temp = temp/10;
        c++;
    }
    //checking if automorphic...
    for(i=0;i<c;i++)
    {
        n1 = k%10;
        k = k/10;
        n2 = n%10;
        n = n/10;
        if(n1!=n2)
        {
            f = 1;
            break;
        }
    }
    if(f==1)
    {
        printf("Non automorphic number");    
    }
    else
    {
        printf("Automorphic number");
    }
}