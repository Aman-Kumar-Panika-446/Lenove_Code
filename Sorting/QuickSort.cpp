#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei)
{
    int pivotElement = arr[(si+ei)/2]; // Random Pivot Element
    int count=0;
    for(int i=si;i<=ei;i++)
    {
        if(i==(si+ei)/2) continue; // skip pivot idx
        if(arr[i]<=pivotElement) count++;
    }
    int pivotIdx= count+si;
    swap(arr[(si+ei)/2],arr[pivotIdx]);

    int i=si;
    int j=ei;
    while(i<pivotIdx && j>pivotIdx)
    {
        if(arr[i]<= pivotElement) i++;
        if(arr[j]> pivotElement) j--;
        if(arr[i]> pivotElement && arr[j]<= pivotElement)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    
    return pivotIdx;
}
void quickSort(int arr[],int si,int ei)
{
    if(si>=ei) return;
    int pi=partition(arr,si,ei);

    quickSort(arr,si,pi-1);
    quickSort(arr,pi+1,ei);
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

    quickSort(arr,0,n-1);

    cout<<"---After Sorting Array---\n";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

}