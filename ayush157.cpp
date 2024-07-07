#include<iostream>
using namespace std;
bool linear(int arr[],int n,int key)
{
    //base case//
    if(n==0)
    {
        return false;
    }
    if(arr[0]==key)
    {
        return true;
    }
    else{
        int ans=linear(arr+1,n-1,key);
        return ans;
    }

}
int main()
{
    int arr[90],n,key;
    cout<<"enter the element size";
    cin>>n;
    cout<<"enter the element";
    for(int i=0;i<n;i++)
    {
       
     cin>>arr[i];
    }
    cout<<"enter the key";
    cin>>key;
   bool li= linear(arr,n,key);
   if(li)
   {
    cout<<"elemetns found";
   }
   else{
    cout<<"elements not found";
   }

}
