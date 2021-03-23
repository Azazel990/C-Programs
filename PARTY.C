#include<stdio.h>
#include<conio.h>
void main()
{
	int code[4],a,b,c,i,p,note;
	a=b=c=0;
	clrscr();
	printf("Please Enter the four digit binary code\n");
	for(i=0;i<=3;i++)
	{
		printf("Enter one bit : ");
		scanf("%d",&code[i]);
	}
	printf("The original binary code is :");
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
	printf("\n the parity bit for the code is : %d",p);
	printf("\nSneding the code from transmitter to receiver \n\n");
	printf("adding noise to the system\n");
	//adding noise


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

   // received code
   printf("\nThe received code is : ");
	for(i=0;i<=3;i++)
	{
		printf("%d",code[i]);
	}

   //parity checking
   for(i=0;i<=3;i++)
	{
		if(i==1)
		{
			b++;
		}
	}
	if(a!=b)
	{
		printf("\nProgram received with one error\n at position %d of the code",note);

	}
	getch();
}


