#include<iostream>
using namespace std;
class Animal{
// public: 
protected:
    int age;
    string name;

    Animal(){
        age=0;
        name="";
    }


    void eat(){
        cout<<"Eating"<<endl;
    }
};
// This is we can extend the class
// class Dog:public Animal{

// };
class Dog:protected Animal{
public:
    Dog(){
        age=10; // protected member can be access in child class
    }
    void print(){
        cout<<this->age;
    }
};
int main()
{
    Dog d;
    // cout<<d.age; 
    d.print();

    // Note -> protected member can be inharent but private member can't
}