//Working of a stack

#include<iostream>
using namespace std;
 
#define max 5

class stack
{
    private :
        int arr[max];
        int top;
    public : 
        stack()
        {
            top = -1;
        }
        void push(int num)
        {
            //overflow condition
            if(top==max-1)
            {
                cout<<"Stack Overflow";
            }
            else
            {
                arr[++top] = num;
            }
        }
        int pop()
        {
            int num;
            //underflow condition
            if(top==-1)
            {
                cout<<"Stack Underflow";
            }
            else
            {
                num = arr[top--];
                return num;
            }
        }
        void display()
        {
            int  i;
            cout<<"The current elements in stack : "<<endl;
            
            for(i=0;i<=top;i++)
            {
                cout<<arr[i]<<endl;    
            }
        }
};

int main()
{
    stack s;
    int c,num;
    while(1)
    {
        cout<<"\nPlease Choose your operation : "<<endl<<"1.Push"<<endl<<"2.Pop"<<endl<<"3.Display"<<endl<<"4.Exit"<<endl;
        cin>>c;
        
        switch(c)
        {
            case 1 : cout<<"\nPlease Enter the item : ";
                        cin>>num;
                        s.push(num);
                        break;
            case 2 :  cout<<"\nRecent item deleted : "<<s.pop();
                        break;
            case 3 : s.display();
                        break;
            case 4 : exit(0); 
            
        }
    }
}