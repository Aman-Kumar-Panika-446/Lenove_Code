#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    // int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<5-1;i++)
    {
        int min=arr[i];
        int mindx=i;
        for(int j=i;j<5;j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                mindx=j;
            } 
        }
        swap(arr[i],arr[mindx]);   
        
    }

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}