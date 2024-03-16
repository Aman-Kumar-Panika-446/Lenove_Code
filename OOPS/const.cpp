#include<iostream>
using namespace std;
int main()
{

//    const int *a = new int(5); // here data is constant
// //    int const *a = new int(5);// same as previous one
//    cout<<*a<<endl;

    // int * const a = new int(10); // here pointer is constant
    // cout<<*a<<endl;

    // int b=20;
    // a=&b;
    // cout<<*a; // it will give error
    // *a=20;
    // cout<<*a<<endl; // it will run

    // Now, both pointer and Data is constant
    const int* const a = new int(10);
    // *a = 20; error
    cout<<*a<<endl;


}
