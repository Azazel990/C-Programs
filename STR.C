#include<stdio.h>
#include<conio.h>
#include<string.h>
 void main()
 {
	int l;
	char a[100],b[100];
	clrscr();
	printf("Please enter some characters\n");
	gets(a);
	gets(b);
	if(strcmp(a,b)==0)
	printf("bothstrings are equal");
	else
	printf("Unequal");
	getch();
 }
