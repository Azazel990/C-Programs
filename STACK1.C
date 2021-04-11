#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 30
int stack[max],top=-1;
void push();
void pop();
void display();
void main()
{
	int top,choice;
	clrscr();
	while(1)
	{
		printf("PLease enter your choice: \n 1.Push \n 2.Pop \n");
		scanf("%d",&choice);
	      switch(choice)
	     {
		case 1 : push();
			break;
		case 2 : pop();
			break;
		default : exit(0);
	     }
	}
	 getch();
}

void push()
{
	int no;
	if(top==max-1)
	{
		printf("stack overflow\n");
	}
	else
	{
		top++;
		printf("Please enter a number\n");
		scanf("%d",&no);
		stack[top]=no;
		display();
	}
}

void pop()
{
	if(top==-1)
	{
		printf("Stack Underflow\n");
	}
	else
	{
		top--;
	}
	display();
}

void display()
{
	int i;
	printf("The elements in the stack are\n");
	for(i=0;i<=top;i++)
	{
		printf("%d\n",stack[i]);
	}
}
