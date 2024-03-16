#include<iostream>
using namespace std;
void sort(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];

    cout<<"Enter the elements in array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,n);
    int x;
    cout<<"How many largest number you want to print: ";
    cin>>x;

    cout<<x<<" largest numbers are:\n";
    for(int i=n-x;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}