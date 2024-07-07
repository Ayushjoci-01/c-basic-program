#include<iostream>
using namespace std;
int BinaryArray(int a[],int n,int key);
int main()
{
    int a[90],n,key;
    cout<<"enter the size"<<endl;
    cin>>n;
    cout<<"enter the element"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the key"<<endl;
    cin>>key;
    int in=BinaryArray(a,n,key);
    cout<<"so the element index is "<<in<<endl;
    return 0;

}
int BinaryArray(int a[90],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while (start<=end)
    
    {
        if(a[mid]==key)
        {
            return mid;
        }
        if(a[mid]<key)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
    
}