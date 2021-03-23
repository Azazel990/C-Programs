#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp,*fp1;
	char  c;
	clrscr();
	fp=fopen("today.txt","w+");
	fp1=fopen("tommorow.txt","w");
	printf("Please enter some Characters\n");
	while(c!='.')
	{
		scanf("%c",&c);
		fputc(c,fp);
	}
	while(!feof(fp))
	{
		c = getc(fp);
		fputc(c,fp1);
	}
	fclose(fp);
	fclose(fp1);
	fp1=fopen("today.txt","r");
	while(!feof(fp1))
	{
		c=getc(fp1);
		printf("%c",c);
	}
	fclose(fp1);
	getch();
	}