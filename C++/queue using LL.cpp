//Implementation of Queue using linked list...
//time complexity : enqueue(),dequeue() => O(1)  

#include<iostream>
#define max 5
using namespace std;

class queue
{
    private : 
        struct node
        {
            int data;
            node *link;
        }*front,*rear;
        int count ;
        
    public : 
        queue()
        {
            count = 0;
            front = NULL;
            rear = NULL;
        }
        void enqueue()
        {
            node *temp;
            int num;
            
            if(count==max)
            {
                cout<<"Queue Overflow\n";
                return;
            }
            
            temp = new node;
            if(count==0)
            {
                front = temp;
                rear = temp;
            }
            
            cout<<"Please Enter the data : ";
            cin>>num;
            
            rear->link = temp; 
            temp->data = num;
            temp->link = NULL;
            count++;
            rear = temp;
        }
        
        void dequeue()
        {
            node *temp;
            
            if(count==0)
            {
                cout<<"Queue Underflow\n";
                return;
            }
            cout<<"Recent element deleted : "<<front->data<<endl;
            front = front->link;
            count--;
        }
        
        void display()
        {
            node *temp;
            temp = front;
            
            if(front==NULL)
            {
                cout<<"Queue Empty\n";
                return;    
            }
            
            cout<<"The current elements in the queue are : \n";
            while(temp->link!=NULL)
            {
                cout<<temp->data<<endl;
                temp = temp->link;
            }
            cout<<temp->data<<endl;
        }
};

int main()
{
    queue q;
    int c;
    
    while(1)
    {
        cout<<"Please Enter your choice : \n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n";
        cin>>c;
        
        switch(c)
        {
            case 1 : q.enqueue();
                     break;
            case 2 : q.dequeue();
                    break;
            case 3 : q.display();
                    break;
            case 4 : exit(0);
        }
    }
    return 0;
}
