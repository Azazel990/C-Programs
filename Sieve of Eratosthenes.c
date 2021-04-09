//Sieve of Eratosthenes method to find prime numbers less than n 
#include<stdio.h>

void main()

{
    int n,i,j,k,arr[100];
    printf("Please Enter the value of n : \n");
    scanf("%d",&n);
    
    j=2;
   for(i=0;i < n-1;i++,j++)
   {
        arr[i] = j;
   }
  
  //marking all the numbers divisible by 2,3,5 as zero  
  for(i=0;i<n-1;i++)
  {
      if(arr[i]%2==0||arr[i]%3==0||arr[i]%5==0)
      {
          if(arr[i]!=2&&arr[i]!=3&&arr[i]!=5)
          {
              arr[i] = 0;
          }
        }
  }
  
    //printing the remaining array 
  printf("The prime numbers up to n are : \n");
  for(i=0;i<n-1;i++)
  {
      if(arr[i]!=0)
      {
          printf("%d\n",arr[i]);
      }
  }
  
  
}