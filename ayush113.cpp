#include<iostream>
using namespace std;
int pifi(int a[],int n);
int main()
{
    int a[90],n;
    cout<<"enter the size"<<endl;
    cin>>n;
    cout<<"enter the element";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int pi=pifi(a,n);
    cout<<"so the pifi number is"<<pi<<endl;
    return 0;
}
int pifi(int a[],int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        int mid=s+(e-s)/2;
        if(a[mid]>=a[0])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        

    }
    return s;
}