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
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        if(a[j]>a[j+1])
        {
            swap(a[j],a[j+1]);
        }
    }
    cout<<"sorted elemrnt is "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}