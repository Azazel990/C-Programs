#include<iostream>
#define max 5
using namespace std;

class stack
{
    private : 
        struct node
        {
            int data;
            node *link;
        }*p,*top;
        int count ;
        
    public : 
        stack()
        {
            top = NULL;
            count = 0;
        }
        void push()
        {
            node *temp;
            int num;
            
            if(count==max)
            {
                cout<<"Stack Overflow\n";
                return;
            }
            else
            {
                temp = new node;
                if(count==0)
                {
                    p = temp;
                   top = temp;
                }
                cout<<"Please Enter the data insinde the node : ";
                cin>>num;
                top->link = temp;
                temp->data = num;
                temp->link = NULL;
                top = temp;
                count++;
            }
        }
        void pop()
        {
            node *temp,*temp1;
            int num;
            
            if(count==0)
            {
                cout<<"Stack Underlow\n";
                return;
            }
            else
            {
                temp = p;
                if(count==1)
                {
                    cout<<"Recent element deleted : "<<top->data<<endl;
                    delete top;
                    count--;
                    return;
                }
                while(temp->link!=top)
                {
                    temp = temp->link;
                }
                cout<<"Recent element deleted : "<<top->data<<endl;
                delete top;
                top = temp;
                count--;
            }
        }
        void display()
        {
            node *temp;
            temp = p;
            
            cout<<"The elements in the stack are : ";
            while(temp!=top)
            {
                cout<<temp->data<<endl;
                temp = temp->link; 
            }
            cout<<top->data<<endl;
        }
};

int main()
{
    stack s;
    int c;
    
    while(1)
    {
        cout<<"Please Enter your choice : \n1.Push\n2.Pop\n3.Display\n4.Exit\n";
        cin>>c;
        
        switch(c)
        {
            case 1 : s.push();
                     break;
            case 2 : s.pop();
                    break;
            case 3 : s.display();
                    break;
            case 4 : exit(0);
        }
    }
    return 0;
}
