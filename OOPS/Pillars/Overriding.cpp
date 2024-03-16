// This is an example of Runtime polymorphism

// it is used for custom modification
#include<iostream>
using namespace std;
class Animal{
    public:
    Animal(){
        cout<<"I'm inside the animal consturctor\n";
    }
    virtual void speak(){
        cout<<"speaking";
    }
};
class Dog:public Animal{
    public:
    Dog(){
        cout<<"I'm inside the dog consturctor\n";
    }
    // overriding
    void speak(){
        cout<<"Barking";
    }
};
int main()
{
    // It was easy

    // Dog d;
    // d.speak();

    // Now Twist time (Upcasting)

    // Animal *a = new Dog();

    // a->speak(); // speaking or barking ? Ans is speaking (Always hit pointers func)

    // DownCasting

    // Dog * d =(Dog *) new Animal();

    // d->speak();

    // Use of VIRTUAL keyword

    // Animal *a = new Dog();

    // a->speak(); // speaking or barking ? Ans is speaking (Always hit pointers func)

    // but if we use put VIRTUAL  keyword in parent class the ->

    // a->speak(); // Now it will print Barking instead of speaking

    // Now lets learn about constructor

    // Animal *a = new Animal(); Parent's class consturctor

    // Dog *d = new Dog();// Both constructor (pahle parents ka constructor)

    // Animal *a = new Dog(); Both constructor

    // Dog *d = (Dog *) new Animal(); // parent's constructor

}