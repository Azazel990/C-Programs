//Equilibrium index of an array

#include<iostream>
using namespace std;

class solution
{
    private : 
        int arr[100] = {-7,1,5,2,-4,3,0};
        int n=7,sum=0;
    public : 
        void generate_sum()
        {
            int i;
             //sum = 0;
            for(i=0;i <=n-1;i++)
            {
                sum = sum + arr[i];
            }
        }
        
        int eqindex()
        {
            int leftsum = 0,i;
            
            for(i=0;i<=n-1;i++)
            {
                sum -= arr[i];
                if (sum == leftsum )
                {
                    return i;
                }
                    
                leftsum += arr[i];
            }
        }
        
       
};

int main()
{
    solution s;
    int ans ;
     s.generate_sum();
    
    ans = s.eqindex();
    
    cout<<"Ans = "<<ans;
    return 0 ;
}