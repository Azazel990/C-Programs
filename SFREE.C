#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n,s,flag=0,flag1=0,flag3=0,i2,j2,n1,n2,n3,k,count=0;
	int i1=0,j1=0,ps[100],result[100],i4=0,j4=0,match=0;
	clrscr();
	printf("Please Enter a Number : ");
	scanf("%d",&n);
	i=2;
	while(i<=n)
	{
		if(n%i==0)
		{
			n1= n/i;
			j=2;
			while(j<=n1)
			{
				if(n1%j==0)
				{
				   //  n2= n1/j;
				    // s = j*j;
				   // flag3=0;
				     k=2;
				     while(k<=j)
				     {
					if(j%k==0)
					{
						if(k*k==j)
						{
						    flag1=1;
						    ps[i1]=j;
						    i1++;
						}

					}
					k++;
				     }
				     if(j*j==n1)
				     {
					flag = 1;
					flag3=0;
					j1=2;
					while(j1<=j)
					{
					    if(j%j1==0)
					    {
						j2=0;
						while(j2<=i1-1)
						{
						   if(ps[j2]==j1)
						   {
							flag3=1;
							break;
						   }
						   else
						   {
							j2++;
						   }
						}
					    }
					    j1++;
					}
					if(flag3==0)
					{
						i4=0;
						while(i4<=j4)
						{
							if(result[i4]==j)
							{
							    match=1;
							    break;
							}
							i4++;
						}
						if(match==0)
						{
							count++;
							printf("%d\n",j);
							result[j4]=j;
							j4++;
						}
						else
						{
							match=0;
						}
					}
				     }
				     else if(flag1!=1)
				     {
						i4=0;
						while(i4<=j4)
						{
							if(result[i4]==j)
							{
							    match=1;
							    break;
							}
							i4++;
						}
						if(match==0)
						{
							count++;
							printf("%d\n",j);
							result[j4]=j;
							j4++;
						}
						else
						{
							match=0;
						}
						flag1=0;
				     }
				}
				j++;
			}
		}
		i++;
	}
	if(flag==1)
	{
		printf("The given number is not a square free number\n");
	}
	else
	{
		printf("The given number is a square free number\n");
	}
	printf("%d",count);
	getch();
}
