#include<iostream>
using namespace std;
int main()
{
    
    //1 2 3 4 5 6 7 8
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int start=1;
    int end=n-1;
    bool flag=false;
    while (start<=end)
    {
        int mid=(start+end)/2;

        if(mid*mid==n) {
            cout<<mid;
            flag=true;
            break;
        }
        else if(mid*mid>n) end=mid-1;
        else start=start+1;
    }
    if(flag==false) cout<<end;
}