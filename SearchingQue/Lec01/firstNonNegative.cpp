#include<iostream>
using namespace std;
int main()
{
    int arr[]={0,1,2,3,4,6,7,8,9,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    // 0 1 3 4 5 6 9 10
    // 0 1 2 3 4 5 6 7
    int start=0;
    int end=n-1;
    int ans=-1;

    while(start<=end)
    {
        int mid = start + (end-start)/2;

        if(arr[mid]==mid) start= mid+1;
        else{
            ans=mid;
            end=mid-1;
        }
    }

    cout<<ans;

}