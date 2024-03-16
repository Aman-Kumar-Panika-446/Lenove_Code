#include<iostream>
#include<climits>
using namespace std;
void printMax(int arr[],int n,int idx,int max)
{
    if(idx==n)
    {
        cout<<max;
        return;
    }
    if(arr[idx]>max) max=arr[idx];
    printMax(arr,n,idx+1,max);
}
int maxNum(int arr[],int n,int idx,int max)
{
    if(idx==n) return max;

    if(arr[idx]>max) max=arr[idx];
    maxNum(arr,n,idx+1,max);
    
}
int MaxInArray(int arr[],int n,int idx)
{
    if(idx==n) return INT_MIN;
    return max(arr[idx],MaxInArray(arr,n,idx+1));
}

int main()
{
    int arr[]={2,52,3,1,5,17,4};
    int size=sizeof(arr)/sizeof(arr[0]);

    // printMax(arr,size,0,INT_MIN);

    // cout<<"Maximum number in array is "<<maxNum(arr,size,0,INT_MIN);

    cout<<"Max in array = "<<MaxInArray(arr,size,0);
}