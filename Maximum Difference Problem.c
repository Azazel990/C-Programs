//Maximum Difference problem
#include<stdio.h>

void main()

{
    int n,i,j,k,arr[100],f=0,max,min;
    printf("Please Enter the number of elements  : \n");
    scanf("%d",&n);
    
    for(i=0;i<=n-1;i++)
    {
        printf("Enter an element : ");
        scanf("%d",&arr[i]);
    }
    
    max = arr[0];
   //Finding the rightmost-largest number 
   for(i=0;i<=n-1;i++)
   {
        if(max < arr[i])
        {
            max = arr[i]; 
            j = i;
        }
   }
   min = arr[0];
   //Finding the leftmost-smallest number
   for(i=0;i<=j;i++)
   {
       if(min > arr[i])
       {
            min = arr[i];    
       }
   }
   
   printf("Maximum Difference = %d\n",max-min);
}