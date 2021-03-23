#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,j,k=0,flag=0,prime[100],m,i1,last,c;
	clrscr();
	printf("PLease Enter the Range : ");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		flag=0;
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			{
				flag =1;
				break;
			}
		}
		if(flag==1&&i==j)
		{
			prime[k] = i;
			k++;
		}
	}
	for(i=0;i<=k-1;i++)
	{
	     for(j=i+1;j<=k-1;j++)
	     {
		m = j +1;
		while(m<=k-1)
		{
		   c = prime[i] + prime[j] ;
		  if(prime[m]==c)
		  {
		     printf("%d + %d = %d\n",prime[i],prime[j],prime[m]);
		  }
		  m++;
		}
	     }
	}
	getch();
}