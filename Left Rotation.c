#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c,n,arr1[100],arr2[100],i;
    printf("Please Enter the Number of elements in the array : ");
    scanf("%d",&n);
    
    for(i=0;i<=n-1;i++)
    {
        printf("Enter an element : ");
        scanf("%d",&arr1[i]);
    }
    
    //left rotation...
    
    for(i=0;i<=n-1;i++)
    {
        if(i==0)
        {
           a = arr1[0];
           arr1[i] = arr1[i+1];
        }
        else if(i==n-1)
        {
            arr1[n-1] = a;
        }
        else
        {
            arr1[i] = arr1[i+1];    
        }
    }
    
    printf("Left rotation : \n");
    for(i=0;i<=n-1;i++)
    {
        printf("%d\n",arr1[i]);
    }
    
    getch();
}