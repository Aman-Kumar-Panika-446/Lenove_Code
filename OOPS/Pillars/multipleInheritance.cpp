#include<iostream>
using namespace std;
class A{
public:
    int physics=100;
};

class B{
public:
    int physics=90;
};

class C:public A,public B{
public:
    int chemistry=50;
};
// what if two members of class are same
// so there is a option of  SCOPE RESOLUTION
int main(){
    C obj;
    cout<<obj.chemistry<<" "<<obj.B::physics; // IMP -> note the syntax
}