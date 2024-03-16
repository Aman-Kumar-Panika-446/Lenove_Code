#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,3,3,3,3,3,5,5,7};
    int n=sizeof(arr)/4;

    int target=3;
    int start=0;
    int end=n-1;
    int idx;
    while(start<=end)
    {
        int mid=(start+end)/2;

        if(arr[mid]==target)
        {
            if(arr[mid-1]==target) end=mid-1;
            else {
                idx=mid;
                break;
            }

        }
        else if(arr[mid]>target) end=mid-1;
        else start=mid+1;
    }
    cout<<"First occurance of "<<target<<" at index = "<<idx;
}