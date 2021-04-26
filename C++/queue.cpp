//Working of a queue

#include<iostream>
using namespace std;
 
#define max 5

class queue
{
    private :
        int arr[max];
        int front,rear;
    public : 
        queue()
        {
            front=0;
            rear=-1;
        }
        void enqueue()
        {
            int num;
            //overflow condition
            if(rear==max-1)
            {
                cout<<"Queue Overflow";
            }
            else
            {
                cout<<"\nPlease Enter the item : ";
                cin>>num;
                arr[++rear] = num;
            }
        }
        int dequeue()
        {
            int num;
            //underflow condition
            if(front==rear+1)
            {
                cout<<"Queue Underflow";
            }
            
            else
            {
                num = arr[front++];
                cout<<"\nRecent item deleted : "<<num;
            }
        }
        void display()
        {
            int  i;
            cout<<"The current elements in Queue : "<<endl;
            
            for(i=front;i<=rear;i++)
            {
                if(i==-1)
                {
                    continue;
                }
                else
                cout<<arr[i]<<endl;    
            }
        }
};

int main()
{
    queue q;
    int c,num;
    while(1)
    {
        cout<<"\nPlease Choose your operation : "<<endl<<"1.Enqueue"<<endl<<"2.Dequeue"<<endl<<"3.Display"<<endl<<"4.Exit"<<endl;
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