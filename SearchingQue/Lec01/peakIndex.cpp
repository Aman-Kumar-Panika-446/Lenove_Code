#include<iostream>
using namespace std;
int main()
{
    int arr[]={0,9,6,4,3,2,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);

    int start=0;
    int end=n-1;

    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        {
            cout<<arr[mid];
            break;
        }
       
        else if(arr[mid]>arr[mid+1]) end=mid-1;
        else start=mid+1;;
    }
}