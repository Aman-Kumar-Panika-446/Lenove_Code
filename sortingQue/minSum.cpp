#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,5,0,0,5,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    //Sorting via insertion sort 

    for(int i=1;i<n;i++)
    {
        int j=i;
        while (j>0 && arr[j]<arr[j-1])
        {
            swap(arr[j],arr[j-1]);
            j--;
        }
        
    }
    //to remove zero from beginning
    while(arr[0]==0)
    {
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]!=arr[i+1] && arr[i]==0)
            {
                swap(arr[i],arr[i+1]);
                break;
            }
        }
    }
    
    int x=0;
    for(int i=0;i<n;i++)
    {
       x*=10;
       x+=arr[i];
    }

    // Second Minimum number
    for(int i=n-1;i>0;i--)
    {
        if(arr[i]!=arr[i-1])
        {
            swap(arr[i],arr[i-1]);
            break;
        }
    }
    
    int y=0;
    for(int i=0;i<n;i++)
    {
        y*=10;
        y+=arr[i];
    }
    
    cout<<"Minimum number is = "<<x<<endl;
    cout<<"Second minimum is = "<<y<<endl;
    cout<<"Minimum sum is = "<<x+y;
    

}