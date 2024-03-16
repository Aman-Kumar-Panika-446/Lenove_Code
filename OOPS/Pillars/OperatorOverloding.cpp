#include<iostream>
using namespace std;
class Para{
    public:
    int val;
    // Syntax of Operator Overloading
    void operator+(Para p){
        int val1= this->val;
        int val2= p.val;

        cout<<val1 -val2;
    }
};
int main()
{
    Para p1;
    Para p2;

    p1.val=10;
    p2.val = 20;

    //This should print difference between them
    p1 + p2;
    
}