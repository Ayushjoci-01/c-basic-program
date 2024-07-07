#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int ,4>a={1,5,6,7};
    int size=a.size();
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"array empty or not"<<a.empty()<<endl;
    cout<<"element at 2 index"<<a.at(2)<<endl;
    cout<<"front element is"<<a.front()<<endl;
    cout<<"last element"<<a.back()<<endl;
}