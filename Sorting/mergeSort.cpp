// #include<iostream>
// #include<vector>
// using namespace std;
// void merge(vector<int> &a , vector<int> &b , vector<int> &v)
// {
//     int i=0,j=0,k=0;
//     while(i<a.size() && j<b.size())
//     {
//         if(a[i]<=b[j]) v[k++]=a[i++];
//         else v[k++]=b[j++];
//     }
//     if(i==a.size()) {while(j<b.size()) v[k++]==b[j++];}
//     if(j==b.size()){ while(i<a.size()) v[k++]==a[i++];}
// }
// void mergeSort(vector<int> &v)
// {
//     int n=v.size();
//     int n1=n/2;
//     int n2=n-n/2;
//      if(n==1) return;
//     vector<int > a(n1),b(n2);

//     for(int i=0;i<n1;i++) a[i]=v[i];
//     for(int i=0;i<n2;i++) b[i]=v[i+n1];

//     mergeSort(a);
//     mergeSort(b);

//     merge(a,b,v);
// }
// int main()
// {
//     int arr[]={1,3,5,7,9,11,13};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     vector<int> v(arr,arr+n);

//     int brr[]={2,4,6,8};
//     int n2=sizeof(arr)/sizeof(arr[0]);

//     vector<int> v2(brr,brr+n2);

//     vector<int> re(n+n2);
//     merge(v,v2,re);
    
//       for(int i=0;i<n+n2;i++)
//     {
//         cout<<re[i]<<" ";
//     }

//     // for(int i=0;i<n;i++)
//     // {
//     //     cout<<v[i]<<" ";
//     // }

//     // mergeSort(v);
//     // cout<<endl;

//     // for(int i=0;i<n;i++)
//     // {
//     //     cout<<v[i]<<" ";
//     // }

// }