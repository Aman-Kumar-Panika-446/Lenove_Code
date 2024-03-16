#include<iostream>
using namespace std;
// One parent class will be inharent into more than one child class
class A{
public:
    int x=100;
};

class B:public A{
public:
    int y=90;
};

class C:public A{
public:
    int z=50;
};

int main(){
    C obj;
    cout<<obj.x<<endl;
    B obj1;
    cout<<obj1.x; 
}