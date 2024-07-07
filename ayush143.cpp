#include<iostream>
using namespace std;
namespace space1{
    void show()
    {
        cout<<"this is show()in space 1"<<endl;
    }
}
namespace space2{
    void show()
    {
        cout<<"this is show()in space 2"<<endl;
    }
}
int main()
{
    space1 ::show();
    space2 ::show();
    return 0;
}