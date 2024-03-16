#include<iostream>
using namespace std;
int main()
{
    int arr[]={0,0,0,0,0,1,1};
    int n=sizeof(arr)/4;

    int start=0;
    int end=n-1;
    int Idx=0;
    while(start<=end)
    {
        int mid = start + (end - start)/2;

        if(arr[mid]==1 && arr[mid-1]==0)
        {
            Idx = mid;
            break;
        }
        else if(arr[mid]==1 && arr[mid-1]==1) end = mid-1;
        else start = mid + 1;
    }

    cout<<"No of zeroes = "<<Idx<<endl;
    cout<<"No of One's = "<<n-Idx<<endl;
}