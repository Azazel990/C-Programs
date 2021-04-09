//Program to find Leaders in an Array  
#include<stdio.h>

void main()

{
    int n,i,j,k,arr[100],f=0;
    printf("Please Enter the number of elements  : \n");
    scanf("%d",&n);
    
    for(i=0;i<=n-1;i++)
    {
        printf("Enter an element : ");
        scanf("%d",&arr[i]);
    }
    
    printf("The array leaders in array are : \n");
    for(i=0;i<=n-2;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            if(arr[i] < arr[j])
            {
                f = 1;
                break; 
            }
        }
        
        if(f==0)
        {
            printf("%d\n",arr[i]);
        }
        f = 0;
    }
    printf("%d\n",arr[n-1]);
}