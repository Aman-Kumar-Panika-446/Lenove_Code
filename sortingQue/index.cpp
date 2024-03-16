#include<iostream>
using namespace std;
int main()
{
    int arr[]={8,6,2,4,9};
    // 2,4,6,8,9
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int brr[n];
    for(int i=0;i<n;i++)
    {
        brr[i]=arr[i];
    }

    for(int i=1;i<n;i++)
    {
        int j=i;
        while(j>0 && brr[j]<brr[j-1])
        {
            swap(brr[j],brr[j-1]);
            j--;
        }
    }  

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(brr[i]==arr[j])
            {
                arr[j]=i;
                break;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
       cout<<arr[i]<< " ";
    }
}