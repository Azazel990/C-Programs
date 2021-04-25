//CStatic class variables

#include<iostream>
using namespace std;

class example
{
    private :
        static int j;
        int i=0;
    public : 
        example()
        {
            i++;
            j++;
        }
        void display()
        {
            cout<<"i = "<<i<<endl<<"j = "<<j;
        }
};

int example::j = 0;

int main()
{
    example e1,e2,e3;
    e1.display();
    return 0;
}