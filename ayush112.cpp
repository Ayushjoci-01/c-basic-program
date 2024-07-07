#include<iostream>
using namespace std;
int lo(int a[],int n,int key);
int main()
{
    int a[90],n,key;
    cout<<"enter the size "<<endl;
    cin>>n;
    cout<<"enter the element0"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the key "<<endl;
    cin>>key;
    int index=lo(a,n,key);
    if(index != -1)
    {
        cout<<"index no"<<index<<endl;
    }
    else 
    {
        cout<<"index not found"<<endl;
    }
    return 0;
}
int lo(int a[],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid;
    int ans=-1;
    while(start<=end)
    {
        
        mid=start+(end-start)/2;
        if(a[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        else if(key>a[mid])
        {
            start=mid+1;
            
        }
        else 
        {
            end=mid-1;
        }
       
        
    }
    return ans;
}