#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char c,temp1;
	int r,temp2;
	clrscr();
	fp=fopen("today.txt","w+");
	printf("Please Enter your name\n");
	scanf("%c%d",&c,&r);
	fprintf(fp,"%c%d",c,r);
	printf("Name\t Roll no\n");
	rewind(fp);
	fscanf(fp,"%c%d",&temp1,&temp2);
	printf("%c\t %d",temp1,temp2);
	fclose(fp);
	getch();
}

