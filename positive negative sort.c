//Program to sort positive and negative Numbers in an array...

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
    
    //sorting
    
    j=0;
    while(j<=1)
    {
        
    
    for(i=1;i<=n-1;i++)
    {
        if(a[i] < 0)
        {
            if(a[i-1] > 0)
            {
              temp = a[i-1];
              a[i-1] = a[i];
              a[i] = temp;
              
              if(a[i+1] < 0)
              {
                  temp = a[i+1];
                  a[i+1] = a[i];
                  a[i] = temp;
              }
            }
            
        }
        else 
            {
               if(a[i+1] < 0)
               {
                   temp = a[i];
                   a[i] = a[i+1];
                   a[i+1] = temp;
                   if(a[i-1] > 0)
                   {
                     temp = a[i-1];
                     a[i-1] = a[i];
                     a[i] = temp;
                   }
               }
            }
      
    }
    j++;
    
}
   
    printf("The Sorted Array : \n");
    for(i=0;i<=n-1;i++)
    {
        printf("%d\n",a[i]);
    }
    getch();
}