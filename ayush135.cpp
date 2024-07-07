#include<iostream>
#include<string>
using namespace std;
void reverse(char name[],int n)
{
    for(int start=0,end=n-1;start<end;start++,end--)
    {
        swap(name[start],name[end]);
    }

}
int getlength(char name[])
{
    int cout=0;
    for(int i=0;name[i]!='\0';i++)
    {
        cout++;
    }
    return cout;

}
int main()
{
    char name[20];
    cout<<"enter the name"<<endl;
    cin>>name;
    cout<<"length of an string is "<<getlength(name)<<endl;
    reverse(name,getlength(name));
    cout<<name<<endl;

    

}