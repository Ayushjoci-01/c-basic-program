#include<iostream>
using namespace std;
class hero
{
    public:
    char health[100];
    int level;
    void print()
    {
        cout<<level<<endl;
    }

};
int main()
{
    hero ayush;
    ayush.health[0]='A';
    ayush.level[1]='\0';
    ayush.level=100;
    cout<<"so the health of the hero is"<<ayush.health<<endl;
    cout<<"so the level of the hero is "<<ayush.level<<endl;
}