#include<iostream>
using namespace std;

class complex{
    int a,b;
    friend int calculator :: sumcomplex(complex o1 ,complex o2 );
    public:
    
    void setNumber(int n1,int n2)
    {
        a=n1;
        b=n2;
    }
    void printnumber()
    {
        cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
    }
};

class calculator{
    public:
    int add(int a,int b)
    {
        return (a+b);
    }
    int sumcomplex(complex o1 ,complex o2 );
};

int calculator :: sumcomplex(complex o1,complex o2)
{
    return (o1.a+o2.a);
}

int main()
{
    complex o1,o2;
    o1.setNumber(1,4);
    o2.setNumber(5,7);
    calculator calc;
    int result = calc.sumcomplex(o1,o2);
    cout << "Sum of real parts: " << result << endl;
    return 0;
}
