#include<iostream>
using namespace std;
int partition(int nums[],int si,int ei){
     
        int pivotElement = nums[(si+ei)/2];
        int count=0;
        for(int i=si;i<=ei;i++)
        {
            if(i==(si+ei)/2) continue;
            if(nums[i]<=pivotElement) count++;
        } 
        int pivotIdx= si + count;
        swap(nums[(si+ei)/2],nums[pivotIdx]);
        
        int i=si;
        int j=ei;
        while(i<pivotIdx && j>pivotIdx)
        {
            if(nums[i]<=pivotElement) i++;
            if(nums[j]>pivotElement) j--;
            if(nums[i]>pivotElement && nums[j]<=pivotElement)
            {
                swap(nums[i],nums[j]);
                i++;
                j--;
            }
        }

        return pivotIdx;
}
int quickSelect(int arr[],int n,int si, int ei, int k)
{
    int pi=partition(arr, si, ei);
    if(pi==n-k) return arr[pi];

    if(pi+1>k) quickSelect(arr,n,pi+1,ei,k);
    else quickSelect(arr,n,si,pi-1,k);

}
int main ()
{
    // n=5  k=2 3=
    // 1 2 3 4 5 
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"---Enter The Data---\n";
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<endl<<"---Your Array Is---";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl<<"Enter the Value Of K: ";
    int k;
    cin>>k;
    cout<<"The Kth Smallest Number is: ";
    cout<<quickSelect(arr,n,0,n-1,k);

}