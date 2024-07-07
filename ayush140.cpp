//concept on opps//
#include<iostream>
using namespace std;
class employee{
    int id;
    int sarley;
    public:
    void setid(void)
    {
        sarley=100;
        cout<<"enter the id of the employee ";
        cin>>id;
    }
    void getid(void)
    {
        cout<<"the id of the employee is"<<id<<endl;
    }
};
int main()
{
    //employee ayush,harry,jock,dig;
    //ayush.setid();
    //ayush.getid();//
    employee fb[4];
    for(int i=0;i<4;i++)
    {
        fb[i].setid();
        fb[i].getid();

    }
    return 0;

}