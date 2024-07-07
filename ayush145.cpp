#include<iostream>
#include<string>
using namespace std;

void removedir(string s, char ch)
{
    string ans;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] != ch)
        {
            ans=ans+s[i];
        }
    }
    cout << "modified string is " << ans << endl;
}

int main()
{
    string s;
    char ch;
    cout << "enter the string" << endl;
    getline(cin,s);
    cout << "enter the removed char" << endl;
    cin>>ch;
    removedir(s, ch);
    return 0;
}
