#include<iostream>
using namespace std;
int main()
{
    int a[90],n,e,pos,ele;
    cout<<"enter the number range"<<endl;
    cin>>n;
    cout<<"enter the element"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the posation you inset the array"<<endl;
    cin>>pos;
    cout<<"enter the element you want to store"<<endl;
    cin>>ele;
     for(int i=n;pos>ele;--i)
     {
        a[i]=a[i-1];
     }
     for(int i=0;i<n;++i)
     {
        cout<<a[i]<<endl;
     }
     return 0;

}