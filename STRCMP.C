#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int i,j,k;
	char s1[100],s2[100],r[100];
	clrscr();
	printf("PLease ENter the two strings : \n");
	gets(s1);gets(s2);
	k=0;
	for(i=0,j=0;s1[i]!=NULL&&s2[j]!=NULL;)
	{
		if(s1[i]!=s2[j])
		{
			k = k + (s1[i] - s2[i]);

		}
		if(s1[i]!=NULL)
			{
				i++;
			}
			if(s2[j]!=NULL)
			{
				j++;
			}

	}
	printf("%d\n",k);
	getch();
}