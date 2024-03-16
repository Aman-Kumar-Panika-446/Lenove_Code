#include<iostream>
using namespace std;
class Animal{
public:
    int age;
    string name;

    Animal(){
        age=0;
        name="blank";
    }
    //copy constructor
    Animal(Animal &obj){ // agar pass by value karte hai to bar bar copy banti hai
        this->age = obj.age;
        this->name = obj.name;
    }
};
int main()
{
    Animal a;
    cout<<a.age<<endl;
    cout<<a.name<<endl;

    Animal b(a); // or b=a both is same

    cout<<b.age<<endl;
    cout<<b.name<<endl;
}