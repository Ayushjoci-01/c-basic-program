#include<iostream>
using namespace std;
int sumofno(int arr[],int size)
{
    //base case//
    if(size==0)
    {
        return 0;
    }
    if(size==1)
    {
        return arr[0];
    }
    int sum=arr[0]+sumofno(arr+1,size-1);
}
int main()
{
    int arr[98],size;
    cout<<"enter the size of element";
    cin>>size;
    cout<<"enter the element  ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int ans=sumofno(arr,size);
    cout<<"sum of the no is"<<ans;
}