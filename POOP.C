#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char c ;
	clrscr();
	fp=fopen("test.txt","w");
	printf("Wtrite the data to be added \n");
	while(c!='.')
	{
		scanf("%c",&c);
		fputc(c,fp);
	}
	fclose(fp);
	fp=fopen("test.txt","r");
	while(!feof(fp))
	{
		c = getc(fp);
		printf("%c",c);
	}
	fclose(fp);
	getch();
	}



