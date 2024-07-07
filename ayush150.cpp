#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll;
    float per;
    void data(void)
{
    cout<<"enter the name of the student"<<endl;
    getline(cin,name);
    cout<<"enter the roll no"<<endl;
    cin>>roll;
    cout<<"enter the per";
    cin>>per;
}
void display(void)
{
    cout<<"student name is "<<name<<endl;
    cout<<"student roll no is"<<roll<<endl;
    cout<<"per is"<<per<<endl;
}
};

int main()
{
    student obj1;
    obj1.data();
    obj1.display();
    return 0;

}
