//square_root without using in-built functions
// Time Complexity  = O(Log(n))
//Space Complexity = O(1)    
#include<iostream>
using namespace std;

class solution
{
    public : 
        int square_root(int n)
        {
            int l=1,r=n-1,mid;
            
            while(l<=r)
            {
                mid = (l+r)/2;
                if(mid*mid==n)
                {
                    return mid;
                }
                else if(mid*mid > n)
                {
                    r = mid-1;
                }
                else if(mid*mid < n)
                {
                    l = mid + 1;
                    if(r==mid + 1)
                    {
                        return mid;
                    }
                }
            }
        }
};

int main()
{
    solution s;
    int n=36;
    
    cout<<"Ans = "<<s.square_root(n);

}

