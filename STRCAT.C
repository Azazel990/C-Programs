#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k;
	char s1[100],s2[100];
	clrscr();
	printf("PLease Enter two Strings :\n");
	gets(s1);gets(s2);
	k=0;
	for(i=0,j=0;s2[j]!=NULL;j++)
	{
		while(s1[i]!=NULL&&k!=1)
		{
		      i++;
		}
		k=1;
		s1[i] = s2[j];
		i++;
	}
	printf("The final string : %s",s1);
	getch();

}