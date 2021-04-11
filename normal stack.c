#include<stdio.h>
#include<stdlib.h>
#define max 5

void push();
void pop();
void Display();

int stack[max];
int top = -1;

void main()
{
    int i,j,k,c;
    
   while(1)
   {
       printf("Please Choose your operation : \n1)Push\n2)Pop\n3)Display\n4)Exit\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1 : push();
                break;
            case 2 : pop();
                break;
            case 3 : Display();
                break;
            case 4 : exit(0);
        }
    
   }
}

void push()
{
    int num;
    
    //checking overflow conditionn
    if(top==max-1)
    {
        printf("Stack overflow\n");
    }
    //else pushing the item into stack
    else
    {
        printf("Please Enter the new element : ");
        scanf("%d",&num);
        stack[++top] = num;
        printf("%d Added to Stack\n",num);
    }
}

void pop()
{
    int num;
    
    //checking Underfolw conditionn
    if(top==-1)
    {
        printf("Stack Underfolw\n");
    }
    //else ppping the element...
    else
    {
        num = stack[top];
        top--;
        printf("Recent element deleted is %d\n",num);
    }
}

void Display()
{
    int i;
    printf("The current Stack is \n");
    
    for(i=0;i<=top;i++)
    {
        printf("%d\n",stack[i]);
    }
}

