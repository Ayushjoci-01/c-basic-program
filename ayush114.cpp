/*Write a C program which calculate and print sum and average of elements of an array*/
#include<iostream>
using namespace std;
int sum(int a[],int n);
int avg(int a[],int n);
int main()
{
    int n,a[90];
    cout<<"enter the size"<<endl;
    cin>>n;
    cout<<"enter the element";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}