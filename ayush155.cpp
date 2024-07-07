#include<iostream>
using namespace std;
bool issorted(int arr[],int n)
{
    if(n==0 ||n==1)
    {
        return true;
    }
    if(arr[0]>arr[1])
    {
        return false;
    }
    else{
        int ans=issorted(arr+1,n-1);
        return ans;
    }
}
int main()
{
    int arr[90],n;
    cout<<"enter the no range";
    cin>>n;
    cout<<"enter the element";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool a=issorted(arr,n);
    if(a)
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }

}