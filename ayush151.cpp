#include<iostream>
using namespace std;
class number{
	int n;
	public:
		void imput(){
			cout<<"Enter number: ";
			cin>>n;
		}
		void display(){
			cout<<"The number is: "<<n<<endl;
		}
		void operator- (){
			n=-n;
		}
		void operator++ (){
			n=n+1;
		}
		void operator-- (){
			n=n-1;
		}
};
int main(){
	number a;
	a.imput();
	a.display();
	++a;
	a.display();
	--a;
	a.display();
	a.operator-();
	a.display();
	return 0;
}
