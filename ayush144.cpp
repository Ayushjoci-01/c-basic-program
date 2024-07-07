#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int unit;
    double totalamount,surchrges;
    cout<<"enter the name of the consumer"<<endl;
    cin>>s;
    cout<<"enter the unit"<<endl;
    cin>>unit;
    if(unit<=100)
    {
        totalamount=unit*0.60;
    }
    else if(unit<=300)
    {
        totalamount=unit*0.60+(unit-100)*0.80;
    }
    else{
        totalamount=unit*0.60+200*0.80+(unit-300)*0.90;
    }
    if(totalamount>300)
    {
        surchrges=(totalamount-300)*0.15;
        totalamount=totalamount+surchrges;
    }
    if(totalamount<50)
    {
        totalamount=50;
    }
    cout<<"name :"<<s<<endl;
    cout<<"totalamount :"<<totalamount<<endl;
    return 0;
}
