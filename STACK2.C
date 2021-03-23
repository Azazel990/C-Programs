#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#define max 20
typedef struct stack{
	int data[max];
	int top;
}stack;
void init(stack*);
int empty(stack*);
int full(stack*);
int pop(stack*);
void push(stack*,int);
int evaluate(char ,int ,int);
void main()
{
	   stack s;
	   char x;
	   int op1,op2,val;
	   clrscr();
	   init(&s);
	   printf("Enter the expression single digit operands and operators only :\n");
	   while((x =getchar())!='\n')
	   {
		if(isdigit(x))
		{
			push(&s,x-48);
		}
		else
		{
			op2 = pop(&s);
			op1 = pop(&s);
			val = evaluate(x,op1,op2);
			push(&s,val);
		}
	   }
	   val =pop(&s);
	   printf("value of expression",val);
	   getch();
}

int evaluate(char x,int op1,int op2)
{
	if(x=='+')

		return (op1+op2);
		else if(x=='-')
			return (op1-op2);
		      else if(x=='*')
			return (op1*op2);
		       else if(x=='/')
			return (op1/op2);
			else if(x=='%');
			return (op1%op2);


}

void init(stack*s)
{
	s ->top = -1;
}

int empty(stack*s)
{
	if(s->top==-1)
		return(1);
		else
		return(0);
}

int full(stack*s)
{
	if(s->top==max-1)
	{
		return (1);
	}
	else
		return(0);
}
void push(stack*s ,int x)
{
	s -> top= s ->top+1;
	s ->data[s->top] = x;
}

int pop(stack*s)
{
	int x;
	x = s->data[s->top];
	s->top= s->top-1;
	return(x);
}


