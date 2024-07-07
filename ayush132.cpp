#include<iostream>
using namespace std;
int main()
{
    char a[90];
    cout<<"enter the name"<<endl;
    cin>>a;
    a[2]='\0';
    cout<<"name is"<<a<<endl;
}