#include<iostream>
#include<string>
using namespace std;
int main()
{
    string arr[]={"aman","sachin","ashish","devanshu","devoditt","abitatha"};
    
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n;

    cout<<"Before sorting :\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

    //Bubble Sort
    for(int i=0;i<n-1;i++)
    {
        bool flag=true;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag=false;
            }
        }
        if(flag==true) break;
    }
    cout<<"\nAfter sorting :\n\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}