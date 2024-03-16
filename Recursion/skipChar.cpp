#include<iostream>
using namespace std;

// void printString(string s,char x,int idx)
// {
//     if(idx==s.length()) return;
//     if(s[idx]!=x)
//     {
//         cout<<s[idx];
//     }
//     printString(s,'a',idx+1);
// }

void printString(string ans,string original,int idx)
{
    if(idx==original.length())
    {
        cout<<ans;
        return;
    }
    char x= original[idx];
    if(x=='a') printString(ans,original,idx+1);
    else printString(ans+original[idx],original,idx+1);
}



int main()
{
    printString("","aman kumar panika",0);
}