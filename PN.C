#include<stdio.h>
#include<conio.h>
void main()
{
	int n1=2,n2=1,p1,p2,num,i,j;
	clrscr();
	printf("Please enter a number \n");
	scanf("%d",&num);
	while(p1 +  p2 !=num||p1 + p2 < num)
	{
		i = 2;
		j = 2;
		while(n1%i!=0)
		{
			i++;
		}
		if(i==n1)
		{
			p1 =n1 ;
		}
		while(n2%j!=0)
		{
			j++;
		}
		if(n2==j)
		{
			p2 = n2 ;
		}
		if(p1 + p2 == num)
		{
			printf("%d + %d = %d",p1,p2,num);

			 break;
		}
		else
		{
			n2++;
		}

	}
	if(p1 + p2 != num)
	{
		printf("Failure\n");
	}

	getch();
}

