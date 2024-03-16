#include<iostream>
using namespace std;
int maze(int row,int column){
    if(row<1 || column<1) return 0;
    if(row==1 && column==1) return 1;
    int right= maze(row,column-1);
    int down=maze(row-1,column);

    return right+ down;
}
void printPath(int row,int column,string s)
{
    if(row<1 || column<1) return;
    if(row==1 && column==1)
    {
        cout<<s<<endl;
        return ;
    }
    printPath(row,column-1,s+'R');
    printPath(row-1,column,s+'D');
}
using namespace std;
int main()
{
   printPath(3,4,"");
}