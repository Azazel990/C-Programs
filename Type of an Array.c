//Program to Find type of an array

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,k,n,l,s,a[100],e,o,m;
    printf("Please Enter the number of elements : ");
    scanf("%d",&n);
    
    //accepting the array
    
    for(i=0;i<=n-1;i++)
    {
        printf("Enter a Number : ");
        scanf("%d",&a[i]);
    }
    
  
   
    e = 0;
    o = 0;
    for(i=0;i<=n-1;i++)
    {
      if(a[i]%2==0)
      {
          e++; 
      }
      else
      {
          o++;
      }
    }
    
    if(e>=1&&o==0)
    {
        printf("Even Array");        
    }
    else if(e==0&&o>=1)
    {
        printf("Odd Array");
    }
    else if(e>=1&&o>=1)
    {
        printf("Mixed Array");
    }
    

    getch();
}