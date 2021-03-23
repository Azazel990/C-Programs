#include<stdio.h>
#include<conio.h>
#define max 5
void addq(int*,int*,int*);
int delq(int*,int*,int*);
//void display(int*,int*,int*);
int i;
void main()
	{
	int f=-1,r=-1,arr[max],c;
	clrscr();
	printf("Initially the Queue is Empty\n");
  while(c!=0)
  {
	printf("Choose the operation \n 1.add elements \n 2.del elements\n 0.Exit\n" );
	scanf("%d",&c);
	switch(c)
	{
		case 1 : addq(arr,&f,&r);
			// display(arr,&f,&r);
			 break;
		case 2 : delq(arr,&f,&r);
		       //  display(arr,&f,&r);
			 break;
		case 0 : exit(0);
	}
  }
	getch();
}

void addq(int*arr,int*f,int*r)
{
	int item;
	if(*r==max-1)
	{
		printf("Queue Overflow\n");
	}
	else
	{
		printf("enter the element to be added \n");
		scanf("%d",&item);
		r++;
		arr[*r] = item;
		printf("After adding\n");
		for(i=*f;i<=*r;i++)
		{
			printf("%d\n",arr[i]);
		}
	}
}

/*void display(int*arr,int*f,int*r)
{
	int i;
	for(i=*f;i<=*r;i++)
	{
		printf("%d\n",arr[i]);
	}
} */

int delq(int*arr,int*f,int*r)
{
	if(*f==*r)
	{
		printf("Queue is empty\n");
	}
    else
    {
		   f++;

	printf("After Deletion\n");
	for(i=*f;i<=*r;i++)
	{
		printf("%d\n",arr[i]);
	}
    }
	return 0;
}







