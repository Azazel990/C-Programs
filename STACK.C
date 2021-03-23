#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 30
void push();
void pop();
void display();
void main()
{
	int c = 1 , top = -1 , stack[max];
	clrscr();
	printf("Choose the Operation \n");
	printf(" 1.Push\n2.Pop\n");
	scanf("%d",&c);
	while (c==1&&c==2)
	{

		switch(c)
		{
			case 1 : push(top,stack);
			break;
			case 2 : pop(top,stack);
			break;
			default : exit(0);
		}
	}
	getch();
}

void push(int top,int stack[])
{
	int n;
	if(top==max-1)
	{
		printf("Stack Overflow");
	}
	else
	{
		top++;
		printf("Please enter the element\n");
		scanf("%d",&n);
		stack[top] = n;
		display(top);
	}
}

void pop(int top)
{
	if(top==-1)
	{
		printf("stack Underflow");
	}
	else
	{
		top--;
		display();
	}
}

void display(int top,int stack[])
{
	int i;
	printf("the elements int the Stack are\n");
	for(i=0;i<=top;i++)
	{
	      printf("%d",stack[top]);
	}
}