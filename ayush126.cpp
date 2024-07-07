#include<iostream>
using namespace std;
void reverse(int a[],int n);
int main()
{
    int a[90],n;
    cout<<"enter the size"<<endl;
    cin>>n;
    cout<<"enter the elements "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    reverse(a,n);
    cout<<"reverse element is "<<endl;
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
void reverse(int a[90],int n)
{
    
    for(int start=0,end=n-1;start<end;start++,end--)
    {
        int temp;
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;

    }
}