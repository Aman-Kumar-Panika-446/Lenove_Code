#include<iostream>
using namespace std;
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

    cout<<"First non repeating term is: ";

    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                    break;
                }
            }
        }
        if(count==0)
        {
            cout<<arr[i];
            break;
        }
    }
}