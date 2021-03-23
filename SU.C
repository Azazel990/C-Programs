#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0,n=0,temp;
	char a[100],b[100];
	clrscr();
	printf("Please type....\n");
	gets(a);
	while(a[n]!='\0')
	{
		n++;
	}
	for(i=0;i<=(n-1);i++)
	{
		b[n-i-1]=a[i];
	}
	printf("the reverse is : %s",b);
	for(i=0;i<n-1;i++)
	{
		if(a[i]!=b[i])
		{
			break;
		}

	}
	if(i==n)
	{
		printf("\n the string is palinrome");
	}
	else
	{
		printf("\n the string is not palindrome");
	}
	getch();
}