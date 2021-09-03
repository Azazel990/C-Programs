#include<iostream>
using namespace std;

class linklist
{
    private : 
        struct node 
        {
            int data;
            node *link;
        }*p;
        
    public : 
        linklist() //constructor 
        {
            p = NULL;
        }
        void addfirst(int num)
        {
            node *temp;
            
            temp = new node;
            temp->data = num;
            temp->link = p;
            p = temp;
        }
        void append(int num)
        {
            node *temp,*temp1;
            
            temp =p;
            
            while(temp->link!=NULL)
            {
                temp= temp->link;
            }
            
            temp1 = new node;
            temp1->data = num;
            temp1->link = NULL;
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
        void reverse()
        {
            node *temp,*prev = NULL,*next,*current;
            
            current = p;
            while(current!=NULL)
            {
                next = current->link;
                current->link = prev;
                prev = current;
                current = next;
            }
            p = prev;
        }
        void display()
        {
            node *temp;
            temp = p;
            
            while(temp!=NULL)
            {
                cout<<endl<<temp->data<<endl;
                temp = temp->link;
            }
            
        }
        
        ~linklist()
        {
            node *temp;
            temp = p;
            
            if(p==NULL)
            {
                cout<<"Current list is empty \n";
                return;
            }
            while(p!=NULL)
            {
                temp = p->link;
                delete temp;
                p = temp;
            }
        }
};

int main()
{
    linklist l;
    int num,n,c;
    while(1)
    {
        cout<<"Please Choose your operation : \n1.Addnode at begining\n2.Append node\n3.Count nodes\n4.Add node in middle\n5.Delete node\n6.Display\n7.Reverse the Link List\n8.Exit\n";
        cin>>c;
        switch(c)
        {
            case 1 : cout<<"Please enter the data : ";
                     cin>>num;
                     l.addfirst(num);
                     break;
            case 2 : cout<<"Please enter the data : ";
                     cin>>num;
                     l.append(num);
                     break;
            case 3 : cout<<"The number of nodes in list : "<<l.count()<<endl;
                     break;
            case 4 : cout<<"Please enter the data of the node after which new nodes is to be added : ";
                     cin>>n;
                     cout<<"PLease Enter thd data : ";
                     cin>>num;
                     l.addnode(num,n);
                     break;
            case 5 : cout<<"Enter the node to be deleted : ";
                     cin>>num;
                     l.delnode(num);
                     break;
            case 6 : cout<<"Current Linked list : \n";
                     l.display();
                        break;
            case 7 : l.reverse();
                    break;
            case 8 : exit(0);
        }
    }
    return 0;
}
