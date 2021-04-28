//Rotate array left with d spaces
//Time complexity = 0(n)
//space complexity = O(1)

#include<iostream>
using namespace std;

class rotate
{
    private : 
        int ans[100],temp;
    public : 
        void rotate_array(int arr[],int d,int n)
        {
            int i,j;
            for(i=0;i < d;i++)
            {
                ans[i] = arr[i];
            }
            
            for(i=0;i<=n-d;i++)
            {
                arr[i] = arr[i+d]; 
            }
            
            for(i=n-d,j=0;j < d;i++)
            {
                arr[i] = ans[j++];
            }
            
            for(i=0;i<=n-1;i++)
            {
                cout<<arr[i]<<endl;
            }
        }
};

int main()
{
    rotate r;
    int d,n=6,arr[100] = {1,2,3,4,5,6};
    cout<<"Please Enter the number of Rotations : ";
    cin>>d;
    
    r.rotate_array(arr,d,n);
    return 0;
}
