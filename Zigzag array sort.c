//ZigZag array Sorted

#include<stdio.h>
#include<conio.h>

void main()
{
    int x,y,z,n,a[100],i,temp;
    printf("Please Enter the Number of elements in the array : ");
    scanf("%d",&n);
    
    for(i=0;i<=n-1;i++)
    {
        printf("Enter an element : ");
        scanf("%d",&a[i]);
    }
    
   for(i=0;i<=n-1;i=i+2)
   {
       if(a[i] > a[i+1])
       {
           temp = a[i];
           a[i] = a[i+1];
           a[i+1] = temp;
           
           if(a[i+1] < a[i+2] )
           {
               temp = a[i+1];
               a[i+1] = a[i+2];
               a[i+2] = temp;
               
               if(a[i+1] < a[i])
               {
                   temp = a[i];
                   a[i] = a[i+1];
                   a[i+1] = temp;
               }
           }
       }
   }
   
   printf("ZigZag Sorted Array : \n");
   for(i=0;i<=n-1;i++)
   {
       printf("%d\n",a[i]);
   }
   
   
    getch();
}