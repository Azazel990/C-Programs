//Can a number be expressed as a sum of two prime numbers?

#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void main()
{
    int i,j,k,m,n,p,q,r,a[100];
    printf("Please Enter a Number : ");
    scanf("%d",&n);
    
    //Getting Prime Numbers upto N
    
    i=1;
    p = 2;
   a[0] = 2;
   j=3;
   while(j<=n)
   {
       m=0;
       while(p<j)
       {
           if(j%p==0)
           {
               m = 1;
           }
           p++;
       }
       if(m==0)
       {
          a[i] = j; 
          i++;
       }
       j++;
       p = 2;
   }
   
   
   //Adding Adjacent Digits of the array of Prime NUmbers
   for(j=0;j<=i-1;j++)
   {
       k=j+1;
       while(k<=i-1)
       {
            if(a[j] + a[j+k]==n)
            {
                printf("%d + %d = %d\n",a[j],a[j+k],n);
            }
            k++;
       }
       
   }
   
    getch();
}