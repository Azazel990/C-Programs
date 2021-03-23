//Merge two sorted arrays...

#include<stdio.h>
#include<conio.h>

void main()
{
    int x,y,z,n1,n2,a1[100],a2[100],i,temp,a3[100],j,k;
    printf("Please Enter the Number of elements in the array : ");
    scanf("%d%d",&n1,&n2);
    
    printf("Please Enter the first array : \n");
    
    for(i=0;i<=n1-1;i++)
    {
        printf("Enter an element : ");
        scanf("%d",&a1[i]);
    }
    
    printf("Please Enter the second Array \n");
     for(i=0;i<=n2-1;i++)
    {
        printf("Enter an element : ");
        scanf("%d",&a2[i]);
    }
    
    
    i=0;
    j=0;
    k=0;
    while(i<=n1-1||j<=n2-1)
    {
        if(a1[i] <= a2[j])
          {
             a3[k] = a1[i];
             i++;
             k++;
          }
        else if(a1[i] >= a2[j])
        {
            a3[k] = a2[j];
            j++;
            k++;
        }
    }
    
   if(i==n1-1)
  {
     
      while(j!=n2-1)
      {
      a3[k] = a2[j];
      j++;
      k++;
      }
  }
  else if(j==n2-1)
  {
      while(i!=n1-1)
      {
      a3[k] = a1[i];
      i++;
      k++;
      }
  }
  printf("Merged Sorted Array : \n");
  for(i=0;i<=k-1;i++)
  {
      printf("%d\n",a3[i]);
  }
   
   
    getch();
}