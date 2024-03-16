// Array must contain number between 1 to N

#include<iostream>
using namespace std;
void cyclicSort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==i) i++;
        int correctIdx=arr[i]-1;
        swap(arr[i],arr[correctIdx]);
    }
    
}
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array\n";
    for(int i=0;i<n;i++) cin>>arr[i];

    cout<<"---You have enetered---\n";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;

    cyclicSort(arr,n);

    cout<<"---After Sorting Array---\n";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";   
}