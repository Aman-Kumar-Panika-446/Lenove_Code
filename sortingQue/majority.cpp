#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,2,1,1,1,2,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    for(int i=1;i<n;i++)
    {
        int j=i;
        while(j>0 && arr[j]<arr[j-1])
        {
            swap(arr[j],arr[j-1]);
            j--;
        }
    }

    cout<<"Majority element is "<<arr[n/2];   
}