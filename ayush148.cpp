#include<iostream>
using namespace std;
int main()
{
    string name;
    int totalamount ,unit,surcharge;
    cout<<"enter the name of the consumer"<<endl;
    getline(cin,name);
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
        int surchrge=totalamount*0.15;
        totalamount=totalamount+surcharge;

    }
    if(totalamount<50)
    {
        totalamount=50;
    }
    cout<<"name:"<<name<<endl;
    cout<<"unit:"<<totalamount;
}