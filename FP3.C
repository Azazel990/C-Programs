#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,a[100],k,n;
	clrscr();
	printf("Please Enter the NUmber and its largest factor : \n");
	scanf("%d%d",&n,&k);
	i=0;
	j=1;
	while(j<=n)
	{
		if(n%j==0)
		{
			a[i] = j;
			i++;
		}
		j++;
	}
	printf("The factors are :\n");
	for(j=0;j<=i-1;j++)
	{
		printf("%d\n",a[j]);
	}
	printf("The kth largest factor is : %d",a[k]);


	getch();
}



