#include<iostream>
using namespace std;
class student{
    string name;
    int roll;
    int per;
    public:
    void input(void)
    {
        cout<<"enter the name of the student"<<endl;
        getline(cin,name);
        cout<<"enter the roll no"<<endl;
        cin>>roll;
        cout<<"enter the per"<<endl;
        cin>>per;
    }
    void display()
    {
        cout<<"name of the student is "<<name<<endl;
        cout<<"roll no of the student is "<<roll<<endl;
        cout<<"per of the student is "<<per<<endl;
    }

};
int main()
{
    student obj1;
    obj1.input();
    obj1.display();
    return 0;

}