#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    cout<<"capacity--"<<v.capacity()<<endl;
    v.push_back(1);                                  //size-how maney elements//
                                                    //capacity-space assign the element//
    cout<<"capacity--"<<v.capacity()<<endl;
     v.push_back(2);
    cout<<"capacity--"<<v.capacity()<<endl;
     v.push_back(3);
    cout<<"capacity--"<<v.capacity()<<endl;
    cout<<"element before pop";
    for(int i:v)
    {
        cout<<i<<endl;
    }
    v.pop_back();
    cout<<"element after pop back"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<"before clearing size"<<v.size()<<endl;
    v.clear();
    cout<<"after clearing size"<<v.size()<<endl;
    
}