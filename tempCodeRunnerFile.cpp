#include<iostream>
#include<string>
using namespace std;
void find(string s)
{
    for(char c:s)
    {
        if(s.find(c)==s.rfind(c))
        {
            cout<<c<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    string s;
    cout<<"enter the string";
    getline(cin,s);
    cout<<"non-rep char is ";
    find(s);
    return 0;
}