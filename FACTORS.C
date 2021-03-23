#include<stdio.h>
#include<conio.h>
void main()
{
	int i=2,n;
	clrscr();
	printf("Please Enter a Number\n");
	scanf("%d",&n);
	printf("The Factors of %d are \n",n);
	while(i<n)
	{
		if(n%i==0)
		{
			printf("%d\n",i);
		}
		i++;
	}
	getch();
}
