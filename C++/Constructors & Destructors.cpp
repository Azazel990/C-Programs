//Constructors and Destructors....

#include<iostream>
using namespace std;

class example
{
    private :
        int data;
    public : 
        example()
        {
            cout<<"COnstructor called"<<endl;
        }
        ~example()
        {
            cout<<"Destructor called"<<endl;
        }
};

int main()
{
    example e;
    cout<<"Main Function"<<endl;
    return 0;
}