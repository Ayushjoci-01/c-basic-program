#include<iostream>
using namespace std;
int main()
{
    int a[90],n;
    cout<<"enter the size";
    cin>>n;
    cout<<"enter the element"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int pos;
    cout<<"enter the pos of an element";
    cin>>pos;
    for(int i=pos;i>=pos;i++)
    {
        a[i]=a[i-1];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}