#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&a,vector<int>&b,vector<int>&result){
    int n1=a.size();
    int n2=b.size();
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]) result[k++]=a[i++];
        else result[k++]=b[j++];
    }
    if(i==n1){
        while(j<n2) result[k++]=b[j++];
    }
    if(j==n2){
        while(i<n1) result[k++]=a[i++];
    }
}
void mergeSort(vector<int> &v){
    int n=v.size();
    int n1=n/2;
    int n2=n-n/2;
    if(n==1) return;
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++) a[i]=v[i];
    for(int i=0;i<n2;i++) b[i]=v[i+n1];

    // Now magic aka Recursion
    mergeSort(a);
    mergeSort(b);

    merge(a,b,v);
}
int main(){
    int arr[]={0,0,0,2,6,4,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    mergeSort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}