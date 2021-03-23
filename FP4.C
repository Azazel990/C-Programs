#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,j,k,a[100],t[100],flag=0,s=0;
	//clrscr();
	printf("Please Enter the number of boxes : ");
	scanf("%d",&n);
	printf("Please Enter the number of candies in each box\n");
	for(i=0;i<n;i++)
	{
		printf(" Box %d : ",i+1);
		scanf("%d",&a[i]);
	}
	//calculating

	for(i=0,j=i+1;j<=n-1;i++,j++)
	{
	    j  = i+1;
		if(flag==0)
		{
			t[i] =  a[i] + a[j];
			printf("%d\n",t[i]);
			flag=1;
		}
		else
		{
			t[i] = t[i-1] + a[j];
			printf("%d\n",t[i]);
		}
	}
	
	for(i=0;i<=n-1;i++)
	{
	    s = s + t[i];
	    //printf("%d\n",s);
	}
	printf("The minimum amount of time : %d",s);
	getch();
}