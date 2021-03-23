#include<stdio.h>
#include<conio.h>
#include<math.h>

void dectobin();
void dectooct();
void dectohex();
void bintodec();
void octtodec();
void hextodec();
void main()
{
	int ch;
	clrscr();
	printf("WELCOME TO NUMBER SYSTEM CONVERSION\n");

	while(ch)
	{
		printf("Please choose your operation\n");
		printf("0.Exit\n1.Decimal to Binary\n2.Decimal to Octal\n3.Decimal to Hexadecimal\n4.Binary to Decimal\n5.Octal to Decimal\n6.Hexadecimal to Decimal\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 0 :exit(0);
			case 1 : dectobin();
				break;
			case 2 : dectooct();
				break;
			case 3: dectohex();
				break;
			case 4 : bintodec();
				break;
			case 5 : octtodec();
				break;
			case 6 : hextodec();
				break;
		}

	}
	getch();
}

void dectobin()
{
	int bin[100],num,i=0,j;
	printf("Please enter the decimal number\n");
	scanf("%d",&num);

	//converting
	while(num>0)
	{
		bin[i] = num %2 ;
		num = num/2;
		i++;
	}
	//printing
	printf("The equivalent Binary number is \n");
	for(j=i-1;j>=0;j--)
	{
		printf("%d",bin[j]);
	}
	printf("\n");
}

void dectooct()
{
	int oct[100],num,i=0,j;
	printf("Please enter the decimal number\n");
	scanf("%d",&num);
		//converting
	while(num>0)
	{
		oct[i] = num %8 ;
		num = num/8;
		i++;
	}
	//printing
	printf("The equivalent Octal number is \n");
	for(j=i-1;j>=0;j--)
	{
		printf("%d",oct[j]);
	}
	printf("\n");

}
void dectohex()
{
		// char array to store hexadecimal number
	char hexaDeciNum[100];

	// counter for hexadecimal number array
	int i = 0,j,num;
	printf("Please enter the Decimal number\n");
	scanf("%d",&num);
	while(num!=0)
	{
		// temporary variable to store remainder
		int temp = 0;

		// storing remainder in temp variable.
		temp = num % 16;

		// check if temp < 10
		if(temp < 10)
		{
			hexaDeciNum[i] = temp;
			i++;
		}
		else
		{
			hexaDeciNum[i] = temp + 55;
			i++;
		}

		num = num/16;
	}
	printf("The Hexadecimal Equivalent of the number is \n");
	// printing hexadecimal number array in reverse order
	for(j=i-1; j>=0; j--)
	{
	    if(hexaDeciNum[j]==65)
	    {
		    printf("A");
	    }
	    else if(hexaDeciNum[j]==66)
	    {
		    printf("B");
	    }
	    else if(hexaDeciNum[j]==67)
	    {
		    printf("C");
	    }
	    else if(hexaDeciNum[j]==68)
	    {
		    printf("D");
	    }
	    else if(hexaDeciNum[j]==69)
	    {
		    printf("E");
	    }
	    else if(hexaDeciNum[j]==70)
	    {
		    printf("F");
	    }
	    else
	    {
		    printf("%d",hexaDeciNum[j]);
	    }
	}
	printf("\n");


}

void bintodec()
{
	int x=0,y,z,n,i,bin[100],j;
	printf("please enter the number of digits in binary code \n");
	scanf("%d",&n);
	printf("please enter the binary code\n");
	for(i=0;i<=n-1;i++)
	{
		printf("Enter one byte : ");
		scanf("%d",&bin[i]);
	}
	for(i=n-1,j=0;i>=0;i--,j++)
	{
	       x = x + bin[i]*pow(2,j);
	}
	printf("The decimal number of the code is %d \n",x);
}

void octtodec()
{
	int x=0,y,z,n,i,bin[100],j;
	printf("please enter the number of digits in Octal code \n");
	scanf("%d",&n);
	printf("please enter the Octal Number\n");
	for(i=0;i<=n-1;i++)
	{
		printf("Enter one byte : ");
		scanf("%d",&bin[i]);
	}
	for(i=n-1,j=0;i>=0;i--,j++)
	{
	       x = x + bin[i]*pow(8,j);
	}
	printf("The decimal number of the code is %d \n",x);
}

void hextodec()
{
	char hex[100];
	int x=0,y,z,n,i,conv[100],j=0;
	printf("please enter the number of digits in hexadecimal code \n");
	scanf("%d",&n);
	printf("please enter the Hexadecimal Number\n");
	for(i=0;i<=n-1;i++)
	{
		printf("Enter one digit : ");
		scanf("%s",&hex[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		if(hex[i]=='A')
		{
			conv[i]=10;
		}
		else if(hex[i]=='B')
		{
			conv[i]=11;
		}
		else if(hex[i]=='C')
		{
			conv[i]=12;
		}
		else if(hex[i]=='D')
		{
			conv[i]=13;
		}
		else if(hex[i]=='E')
		{
			conv[i]=14;
		}
		else if(hex[i]=='F')
		{
			conv[i]=15;
		}
		else{
		       conv[i] = hex[i];
		}
	}
	for(i=n-1,j=0;i>=0;i--,j++)
	{
	       x = x + conv[i]*pow(16,j);
	}
	printf("The decimal number of the code is %d \n",x);
}