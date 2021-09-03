//Circular linked list...

#include<iostream>
using namespace std;

struct node {
    int data;
    node *link;
}*p;
void addfirst(int num)
        {
            node *temp,*temp1;
            
            if(p==NULL)
            {
                temp = new node;
                temp->data = num;
                temp->link = temp;
                p = temp;
            }
            else
            {
                temp = new node;
                temp->data = num;
                temp1 = p;
                
                while(temp1->link!=p)
                {
                    temp1 = temp1->link;
                }
                temp1->link = temp;
                temp->link = p;
                p = temp;
            }
           
        }
        void append(int num)
        {
            node *temp,*temp1;
            
            temp = p;
            
            while(temp->link!=p)
            {
                temp= temp->link;
            }
            
            temp1 = new node;
            temp1->data = num;
            temp1->link = p;
            temp->link = temp1;
        }
        int count()
        {
            node *temp;
            int c = 0;
            temp = p;
            while(temp!=NULL)
            {
                temp= temp->link;
                c++;
            }
            return c;
        }
        
        void addnode(int num,int n)
        {
            node *temp,*temp1;
            
            temp = p;
            
            while(temp->data!=n)
            {
                temp = temp->link;
            }
            
            temp1 = new node;
            temp1->data = num;
            temp1->link = temp->link;
            temp->link = temp1;
        }
        void delnode(int num)
        {
            node *temp,*temp1;
            
            if(p->data==num)
            {
                temp = p->link;
                delete p;
                return;
            }
            temp = p;
            temp1 = temp->link;
            while(temp1->data!=num)
            {
                temp1=temp1->link;
                temp=temp->link; 
            }
            
            temp->link = temp1->link;
            delete temp1;
            
        }
        
        void display()
        {
            node *temp;
            temp = p;
            cout<<temp->data<<endl;
            temp = temp->link;
            while(temp!=p)
            {
                cout<<endl<<temp->data<<endl;
                temp = temp->link;
            }
            
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