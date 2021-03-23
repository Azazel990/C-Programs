#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void addn(struct node**,int);
void addaf(struct node**,int);
void addfirst(struct node**,int);
void sortasc(struct node**);
void sortdsc(struct node**);
void display(struct node *);
void deln(struct node**,int);
struct node {
	int data;
	struct node *link;
	};
void count(struct node*);
void main()
{
	int ch,num;
	struct node *p;
	clrscr();
	p= NULL;

	while(ch)
	{
		printf("Please enter your choice \n0.Exit\n1.Add node\n2.Display\n3.Delete Node\n4.Count\n5.Add in between\n6.Add first node\n7.Sort in Ascending order\n8.Sort in Descending order\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 0 : exit(0);
			case 1 : printf("please enter the num \n");
				 scanf("%d",&num);
				 addn(&p,num);
				break;
			case 2: display(p);
			       //	printf("%d\n",p);
				break;

			case 3 : printf("Please enter the element to be deleted\n");
				scanf("%d",&num);
				deln(&p,num);
				break;
			case 4 : count(p);
				break;

			case 5 : printf("Please enter the data of the node after which you wish to add the new node\n");
				 scanf("%d",&num);
				 addaf(&p,num);
				 break;
			case 6 : printf("Enter the data to be added in the node\n");
				 scanf("%d",&num);
				 addfirst(&p,num);
				 break;
			case 7 : sortasc(&p);
				break;
			case 8 : sortdsc(&p);
				break;

		}
	}
	getch();
}

void addn(struct node **q,int num)
{
	struct node *temp,*r;
	if(*q==NULL)
	{
		temp = (struct node *)malloc(sizeof(struct node));
		temp->data = num;
		temp->link = NULL;
		*q = temp;
	}
	else
	{
		temp = *q;
		while(temp->link!=NULL)
		{
			temp= temp->link;
		}
		r =(struct node *)malloc(sizeof(struct node));
		r->data = num;
		r->link = NULL;
		temp->link = r;
	}

}

void display(struct node *q)
{
	printf("the elements in the linked list are\n ");
	printf("Data\tAddress\n");
	while(q!=NULL)
	{

		printf("%d\t%d\n",q->data,q->link);
		q=q->link;
	}

}

void count(struct node *q)
{
	int count=0;
	struct node *temp;
	temp = q;
	while(temp->link!=NULL)
	{
	       count++;
	       temp = temp->link;
	}
		printf("\n");
	printf("The number of elements in the List are : %d \n",count+1);
}

void deln(struct node **q,int num)
{
	struct node *old,*temp;
	temp = *q;
	while(temp!=NULL)
	{
		if(temp->data==num)
		{
			if(temp==*q)
			{
				*q = temp->link;
			}

			else
			{
				old->link = temp->link;
				free(temp);
				return;
			}
		}
		else
		{
			old = temp;
			temp = temp->link;
		}
	}

}


void addaf(struct node **q,int num)
{
	int n;
	struct node *temp,*naya;
	temp = *q;
	printf("please enter the new number \n");
	scanf("%d",&n);
	naya =(struct node *)malloc(sizeof(struct node));

		while(temp->data!=num)
		{
			temp = temp->link;
		}
		naya->data = n;
		naya->link=temp->link;
		temp->link = naya;
}

void addfirst(struct node**q, int num)
{
	struct node *temp,*first;
	temp = *q;
	first =(struct node *)malloc(sizeof(struct node));
	first->data = num;
	first->link = temp;
	*q = first;
}

void sortasc(struct node **q)
{
	int s,it=0,count=0;
	struct node *ctemp,*temp,*aage;
	ctemp = *q;
	temp = *q;
	aage = temp->link;
 while(ctemp->link!=NULL)
 {
	       count++;
	       ctemp = ctemp->link;
 }

 while(it!=count)
 {

   while(temp->link!=NULL)
   {
	if(temp->data>=aage->data)
	{
		s = temp->data;
		temp->data = aage->data;
		aage->data = s;
	}
	temp = temp->link;
	aage = aage->link;
   }
   temp = *q;
   aage = temp->link;
   it++;
 }
}

void sortdsc(struct node **q)
{
	int s,it=0,count=0;
	struct node *ctemp,*temp,*aage;
	ctemp = *q;
	temp = *q;
	aage = temp->link;
 while(ctemp->link!=NULL)
 {
	       count++;
	       ctemp = ctemp->link;
 }

 while(it!=count)
 {

   while(temp->link!=NULL)
   {
	if(temp->data<=aage->data)
	{
		s = temp->data;
		temp->data = aage->data;
		aage->data = s;
	}
	temp = temp->link;
	aage = aage->link;
   }
   temp = *q;
   aage = temp->link;
   it++;
 }
}


