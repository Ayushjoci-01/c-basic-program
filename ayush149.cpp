#include<iostream>
using namespace std;
void remove(string name,char ch)
{
    string ans;
    for(int i=0;i<name.length();i++)
    if(name[i]!=ch)
    {
        ans=ans+name[i];
    }
    cout<<"modified string is"<<ans<<endl;
}
int main()
{
    string name;
    char ch;
    cout<<"enter the string "<<endl;
    getline(cin,name);
    cout<<"enter the char"<<endl;
    cin>>ch;
    remove(name,ch);
    return 0;
}