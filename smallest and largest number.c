//Program to Find smallest and largest element 

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,k,n,l,s,a[100];
    printf("Please Enter the number of elements : ");
    scanf("%d",&n);
    
    //accepting the array
    
    for(i=0;i<=n-1;i++)
    {
        printf("Enter a Number : ");
        scanf("%d",&a[i]);
    }
    
    //smallest element
    s = a[0]; 
    for(i=0;i<=n-1;i++)
    {
        if(a[i] < s)
        {
            s = a[i];
        }
    }
    
    //largest emelent 
    l = a[0];
    for(i=0;i<=n-1;i++)
    {
        if(a[i] > l)
        {
            l = a[i];
        }
    }
    
    printf("Smallest element = %d\nLargest Element = %d",s,l);
    getch();
}