//Program to find median of two sorted arrays....

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    int a[100],b[100],a3[100],n,i,j,k,temp,c =0 ,m1,m2;
    float x,y,z;
    printf("Enter the number of Elements : ");
    scanf("%d",&n);
    
    printf("Please Enter the first Array : \n");
    for(i=0;i<=n-1;i++)
    {
        printf("Enter an Element : ");
        scanf("%d",&a[i]);
    }
    
     printf("Please Enter the Second Array : \n");
    for(i=0;i<=n-1;i++)
    {
        printf("Enter an Element : ");
        scanf("%d",&b[i]);
    }
    
    while(c<=n)
    {
        for(i=0;i<=n-1;i++)
        {
            if(a[i] > a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
        c++;
    }
    
    c=0;
    while(c<=n)
    {
        for(i=0;i<=n-1;i++)
        {
            if(b[i] > b[i+1])
            {
                temp = b[i];
                b[i] = b[i+1];
                b[i+1] = temp;
            }
        }
        c++;
    }
    
    
      
    i=0;
    j=0;
    k=0;
    while(i<=n-1||j<=n-1)
    {
        if(a[i] <= b[j])
          {
             a3[k] = a[i];
             i++;
             k++;
          }
        else if(a[i] >= b[j])
        {
            a3[k] = b[j];
            j++;
            k++;
        }
    }
    
   if(i==n-1)
  {
     
      while(j!=n-1)
      {
      a3[k] = b[j];
      j++;
      k++;
      }
  }
  else if(j==n-1)
  {
      while(i!=n-1)
      {
      a3[k] = a[i];
      i++;
      k++;
      }
  }
 
    
    if(k%2==0)
    {
        x = k/2;
      
    m1 = x;
    m2 = (a3[m1] + a3[m1-1])/2;
    printf("Median = %d\n",m2);
    
    }
    
    else
    {
        x = k/2;
    m1 = ceil(x);
    printf("Median = %d\n",a3[m1]);
    
    }
    
   
        
}