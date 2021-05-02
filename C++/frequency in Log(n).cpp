//frequency of an element in O(Log(n)) time ...

#include<iostream>
using namespace std;

class frequency
{
    private : 
        int c,flag; //record the count;
    public : 
        frequency()
        {
            c = 0;
            flag = 0;
        }
        int solution(int arr[],int n,int x)
        {
            int l=0,r=n-1,mid,last=n-1,first=0;
            while(l<=r)
            {
                mid = (l+r)/2;
                // cout<<"Mid = "<<mid<<endl;
                if(arr[mid]==x)
                {
                    if(arr[mid-1]==x)
                    {
                        if(arr[mid+1]!=x)
                        {
                            last = mid;    
                        }
                       
                        r = mid-1;
                        //  cout<<"r = "<<r<<endl;
                    }
                    else if(arr[mid+1]==x)
                    {
                        if(arr[mid-1]!=x)
                        {
                            first = mid;                            
                        }
                        l = mid+1;
                        // cout<<"l = "<<l<<endl;

                    }
                    else
                    {
                        return 1;
                    }
                }
                else if(arr[mid] > x)
                {
                    r = mid - 1;
                }
                else 
                {
                    l = mid + 1;
                }
            }
            // cout<<"last = "<<last<<"\nfirst = "<<first<<endl;
            c = last - first + 1;
            return c;
        }
        
};

int main()
{
    frequency f;
    int x,arr[100] = {1,2,3,3,3,3,4,4,5,6,6,7},n=12 ;
    
    cout<<"Please Enter the number to be searched : ";
    cin>>x;
    cout<<"Frequency = "<<f.solution(arr,n,x);
    return 0;
}

