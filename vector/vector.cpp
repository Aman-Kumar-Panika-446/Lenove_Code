#include<iostream>
#include<vector>
using namespace std;
void partReverse(int a,int b,vector<int>&v)
{
    while (a<=b)
    {
        int temp=v[a];
        v[a]=v[b];
        v[b]=temp;
        a++;
        b--;
    }
    
}

void display(vector<int>v,int n)
{
    // cout<<"Array is:\n";
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";

}

void reverse(vector<int>&v,int n)
{
    int i=0;
    int j=n-1;
    while (i<=j)
    {
       int temp=v[i];
       v[i]=v[j];
       v[j]=temp;
       i++;
       j--;
    }
    
}
int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;

    vector<int>v(n);
    cout<<"Enter the elements in array:\n";

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int k;
    cout<<"Enter the value by which you want to rotate: ";
    cin>>k;

    cout<<"Before rotation: \n";
    display(v,n);

    cout<<"After Rotation\n";
    partReverse(0,n-k-1,v);
    partReverse(n-k,n-1,v);
    reverse(v,n);
    display(v,n);



    return 0;
}
