#include<stdio.h>
#include<conio.h>
int noise(int *);
int pchecker(int *,int,int);

void main()
{
	int code[4],a=0,b,c,i,p,n;
	clrscr();
	printf("Please Enter the four digit binary code\n");
	for(i=0;i<=3;i++)
	{
		printf("Enter one bit : ");
		scanf("%d",&code[i]);
	}
	printf("\nThe original binary code is :");
	for(i=0;i<=3;i++)
	{
		printf("%d",code[i]);
	}

	//parity assign
	for(i=0;i<=3;i++)
	{
		if(code[i]==1)
		{
			a++;
		}
	}
	if(a%2==0)
	{
		p = 0;
	}
	else
	{
		p = 1;
	}
	printf("\n The parity bit for the code is : %d",p);
	printf("\nShould noise be addded to the system \n 1.Yes \n 2.No\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1 : n=noise(code);
			break;
		case 2 : break;
	}
	printf("Sneding the code from transmitter to receiver \n\n");
	printf("The received code is : ");
	for(i=0;i<=3;i++)
	{
		printf("%d",code[i]);
	}
	pchecker(code,n,a);
	getch();
}

int noise(int *code)
{
	int c=0,note,i ;

	for(i=0;i<=3;i++)
	{
	   if(c==1)
	   {
		break;
	   }
	    else if(code[i]==1)
		{
			code[i] = 0;
			note=i;
			c++;
		}
	}

	return note;
}

int pchecker(int *code,int note,int a)
{
	int b=0,i;
	for(i=0;i<=3;i++)
	{
		if(code[i]==1)
		{
			b++;
		}
	}
	if(a!=b)
	{
		printf("\nProgram received with one error at position %d of the code",note);
	}
	return 0 ;
}
