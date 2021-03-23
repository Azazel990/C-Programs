//Program to sort elements of an array by frequency

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,k,n,l,s,a[100],e,o,m,f[100],r[100];
    printf("Please Enter the number of elements : ");
    scanf("%d",&n);
    
    //accepting the array
    
    for(i=0;i<=n-1;i++)
    {
        printf("Enter a Number : ");
        scanf("%d",&a[i]);
    }
    k=0;
   
   //finding frequency
   for(i=0;i<=n-1;i++)
   {
       m= 0;
      
      //searching if the element is previously present or not
      for(j=0;j<i;j++)
      {
          if(r[j]==a[i])
          {
              m = 1;
              break;
          }
      }
      if(m==0)
      {
          r[k] = a[i];
          f[k] = 0;
          for(j=0;j<=n-1;j++)
          {
              if(r[k]==a[j])
              {
                f[k]++;
              }
          }
          k++;
      }
        
   }
   
   //sorting by frequency
   
   for(i=0;i<=k-2;i++)
   {
        if(f[i] < f[i+1])
        {
            l = f[i];
            f[i] = f[i+1];
            f[i+1] = l;
            
            
            l = r[i];
            r[i] = r[i+1];
            r[i+1] = l ;
        }
   
   }
   
   
   printf("The frequency of all elements is : \n");
   for(i=0;i<=k-1;i++)
   {
       printf("%d = %d\n",r[i],f[i]);
   }
   
    getch();
}