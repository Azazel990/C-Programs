#include<stdio.h>
#include<conio.h>

void addpage(struct stack*);
void display(struct stack*);
void initiliaze(struct stack*);
int item,c=0;
struct stack
{
	int a[100];
	int top,j,k;
};

void main()
{
	int n,i,j,k,ch=1;
	struct stack s;
	clrscr();
	initiliaze(&s);
	while(ch==1||ch==2)
	{
		printf("Enter your choice : \n1.AddPage\n2.Display memory\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 : addpage(&s);
				break;
			case 2 : display(&s);
				break;
			default : exit(0);

		}
	}

	getch();
}
void initiliaze(struct stack *s)
{
	s->top = -1;
}


void addpage(struct stack *s)
{
	int i=0,flag=0,temp,j,rem;
	s->k = 0;
	printf("please Enter the Page Number : ");
	scanf("%d",&item);
	while(i<=2)
	{
	     if(item==s->a[i])
	     {
		flag= 1;
		s->j = i;
	     }
	     i++;
	}
	if(c<=2)
	{
	    s->top++;
	    s->a[s->top]=item;
	    c++;
	}
	else if(flag==1)
	{
	   temp = s->a[s->top];
	   s->a[s->top] =s->a[s->j] ;
	   s->a[s->j]= temp;
	   flag=0;
	}
	else
	{
	    rem = s->a[0];
	    s->a[0] = item;
	    printf("The page recently removed : %d\n",rem);
	    while(s->k<=1)
	    {
		temp =  s->a[s->k];
		s->a[s->k] = s->a[s->k+1];
		s->a[s->k+1] = temp;
		s->k++;
	    }
	}
}
void display(struct stack *s)
{
	int i,j,k;
	printf("The current memory is : \n");
	for(i=0;i<=2;i++)
	{
		printf("%d\n",s->a[i]);
	}
}