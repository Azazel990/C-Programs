//class and objects in c++

#include<iostream>
using namespace std;

class rectangle
{
    private :   
            int len,br;
            
    public : 
    
            void getdata()
            {
                cout<<endl<<"Enter Length and breadth";
                cin>>len>>br;
            }
            
            void setdata(int l,int b)
            {
                len = l;
                br = b;
            }
            void area_peri()
            {
                int area,peri;
                
                area = len*br;
                cout<<endl<<"Area = "<<area;
                
                peri = 2*len*br;
                cout<<endl<<"Perimeter = "<<peri;
            }
};

int main()
{
    rectangle r1,r2,r3;
    
    r1.setdata(2,2);
    r1.area_peri();
    
    r1.getdata();
    r1.area_peri();
    
    return 0;
}