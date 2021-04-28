//binary search

//time complexity = O(log(n))
//space complexity = O(1)
#include<iostream>
using namespace std;
class search
{
    public : 
        int bin_search(int arr[],int n,int x)
        {
            int l=0,r=n-1,mid;
            
            while(l<=r)
            {
                mid = (l+r)/2;
                if(arr[mid]==x)
                {
                    return mid;
                }
                else if(arr[mid] < x)
                {
                    l = mid+1;
                }
                else
                {
                    r = mid - 1;
                }
            }
            return -1;
        }
};

int main()
{
    search s;
    int arr[100] = {10,20,30,40,50,60},x,n=6,ans;
    cout<<"Please Enter the element to be searched : ";
    cin>>x;
    
    cout<<"Index = "<<s.bin_search(arr,n,x);
    return 0;
}