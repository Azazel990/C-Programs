#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0,n=0,temp,j;
	char a[100],b[100];
	clrscr();
	printf("Please type....\n");
	gets(a);
	while(a[n]!='\0')
	{
		n++;
	}
	printf("%d",n);
	printf("\n");
	for(i=0,j=n-1;i<=(n-1);i++,j--)
	{
		b[j]=a[i];
	}

	printf("%s",b);
	for(i=0;i<=(n-1);i++)
	{
		if(a[i]!=b[i])
		break;
	}
	printf("\n");
	if(i==n)
	{
		printf("Palindrome");
	}
	else
	{
		printf("not palindrome");
	}
	getch();
}