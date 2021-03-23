//Program to find the longest subarray in with average greater than k...

#include<stdio.h>
#include<conio.h>

void main()
{
    int x,y,z,n,n2,a[100],a2[100],i,temp,a3[100],j,k;
    printf("Please Enter the Number of elements in the array : ");
    scanf("%d",&n);
    
    for(i=0;i<=n-1;i++)
    {
        printf("Enter an element : ");
        scanf("%d",&a[i]);
    }
    
    printf("Please Enter the value of K : ");
    scanf("%d",&k);
    
    //sorting
    i=0;
    while(i<=n-1)
    {
        if(a[i] < a[i+1])
        {
        //   while(a[i] < a[i+1])
        //   {
        //         x = (a[i] + a[i+1])/2;
        //         if(x >= k)
        //         {
        //             printf("{%d,%d} where avg = %d\n",a[i],a[i+1],x);
        //         }
        //         i++;
        //   }
            j = i;
            while(a[i] < a[i+1])
            {
                i++;
            }
            
            x = (a[j] + a[i])/2 ;
            printf("{%d,%d} where avg = %d\n",a[j],a[i],x);
            
        }
        i++;
    }
   
    // printf("The Sorted Array : \n");
    // for(i=0;i<=n-1;i++)
    // {
    //     printf("%d\n",a[i]);
    // }
    getch();
}