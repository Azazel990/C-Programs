//Doubly linked list...

#include<iostream>
using namespace std;

struct node {
    int data;
    node *next;
    node *prev;
}*head;

void addfirst(int num)
{
    node *temp;
    
    if(head==NULL)
    {
        temp = new node;
        temp->data = num;
        temp->next = NULL;
        temp->prev = NULL;
        head = temp;
    }
    else
    {
        temp = new node;
        temp->data = num;
        temp->next = head;
        temp->prev = NULL;
        head->prev = temp;
        head = temp;
    }
}

void append(int num)
{
    if(head==NULL)return;
    
    node *temp,*temp1;
    
    temp = head;
    
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    
    temp1 = new node;
    temp1->data = num;
    temp1->next = NULL;
    temp1->prev = temp;
    
    temp->next = temp1;
}

void display()
{
    if(head==NULL)return;
    
    node *temp = head;
    
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}
int count()
{
    node *temp = head;
    int c = 0;
    while(temp!=NULL)
    {
        c++;
        temp = temp->next;
    }
    return c;
}
void addnode(int num,int n)
{
    if(head==NULL)return;
    
    node *temp = head;
    
    while(temp->data!=n)
    {
        temp = temp->next;
    }
    
    node *temp1 = new node;
    temp1->data = num;
    temp1->next = temp->next;
    temp1->prev = temp;
    temp->next = temp1;
}
void delnode(int num)
{
    if(head==NULL)return;
    
    node *temp = head;
    
    if(head->data==num)
    {
        head->next->prev = NULL;
        head = head->next;
        return;
    }
    while(temp->data!=num)
    {
        temp = temp->next;
    }
    
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    
    delete temp;
}
int main()
{
  
    int num,n,c;
    while(1)
    {
        cout<<"Please Choose your operation : \n1.Addnode at begining\n2.Append node\n3.Count nodes\n4.Add node in middle\n5.Delete node\n6.Display\n7.Exit\n";
        cin>>c;
        switch(c)
        {
            case 1 : cout<<"Please enter the data : ";
                     cin>>num;
                     addfirst(num);
                     break;
            case 2 : cout<<"Please enter the data : ";
                     cin>>num;
                     append(num);
                     break;
            case 3 : cout<<"The number of nodes in list : "<<count()<<endl;
                     break;
            case 4 : cout<<"Please enter the data of the node after which new nodes is to be added : ";
                     cin>>n;
                     cout<<"PLease Enter thd data : ";
                     cin>>num;
                     addnode(num,n);
                     break;
            case 5 : cout<<"Enter the node to be deleted : ";
                     cin>>num;
                     delnode(num);
                     break;
            case 6 : cout<<"Current Linked list : \n";
                     display();
                        break;
            case 7 : exit(0);
        }
    }
    return 0;
}