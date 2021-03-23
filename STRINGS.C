#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void main()
{
	int i,j,k;
	char s[100];
	clrscr();
	printf("Please Enter the string :\n");
	gets(s);
	j=0;
	for(i=0;s[i]!=NULL;i++)
	{
		if(s[i]=='c'||s[i]=='C')
		{
			j = i;
			while(s[j]!=NULL)
			{
				s[j] = s[j+1];
				j++;
			}
		}

	}
	printf("%s",s);
	getch();
}
