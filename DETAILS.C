#include<stdio.h>
#include<conio.h>
struct student{
			char name[100];
			int r;
			float marks;
			};
void main()
{
	struct student s1;
	clrscr();
	printf("Please Enter your name \n");
	scanf("%s",&s1.name);
	printf("Please Enter your Roll no \n");
	scanf("%d",&s1.r);
	printf("Please Enter Your Marks \n");
	scanf("%f",&s1.marks);
	printf("Here are Student Details\n");
	printf("Name : %s\n",s1.name);
	printf("Roll no : %d\n",s1.r);
	printf("Marks : %f\n",s1.marks);
	getch();
}