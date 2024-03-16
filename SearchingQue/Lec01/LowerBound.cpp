#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,4,5,9,15,18,21,24};
    int n=9;

    int target=18;
    int start=0;
    int end=n-1;
    int idx;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==target)
        {
            cout<<arr[mid-1];
            break;
        }
         else if(arr[mid]>target)
        {
            end=mid-1;
            idx=end;
            if(arr[idx]>target) idx--;
        }
        else{
            start=mid+1;
            idx =start;
            if(arr[idx]>target) idx--;
        }
       
    }

    cout<<"Lower Bound of "<<target<<" is "<<arr[idx];
}