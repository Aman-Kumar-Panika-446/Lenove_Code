#include<iostream>
using namespace std;
void printArray(int arr[],int start,int size)
{  
    if(start==size) return;
    cout<<arr[start]<<" ";
    printArray(arr,start+1,size);
}
int main()
{
    int arr[]={1,2,3,4,5};
    printArray(arr,0,5);
}