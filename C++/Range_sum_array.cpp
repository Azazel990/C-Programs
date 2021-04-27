//Range Sum Queries using Prefix Sum

#include<iostream>
using namespace std;

class solution
{
    private : 
        int prefix[100];
    public : 
        void generate_prefix(int arr[],int n)
        {
            int i ;
            prefix[0] = arr[0];
            for(i=1;i < n;i++)
            {
                prefix[i] = prefix[i-1] + arr[i];
            }
        }
        
        void range_sum(int arr[],int q,int n)
        {
            int c = 0,l,r;
            while(c < q)
            {
                cout<<"\nPlease eneter the values of l and r : ";
                cin>>l>>r;
                if(l==0)
                {
                    cout<<prefix[r]<<endl;
                }
                else
                {
                    cout<<endl<<"pre[r] = "<<prefix[r]<<" pref[l-1] = "<<prefix[l-1]<<endl;
                    cout<<prefix[r] - prefix[l-1]<<endl;
                }
                c++;
            }
        }
};

int main()
{
    solution s;
    int n=5,arr[100] = {4,5,3,2,5};
    int q;
    s.generate_prefix(arr,n);
    
    cout<<"Please enter the number of queries : ";
    cin>>q;
    
    s.range_sum(arr,q,n);
    
    return 0 ;
}