#include<iostream>
using namespace std;

class A{
	public:
		int a_ka_public;
		
		void show(){
			cout<<"A show"<<endl;
		}
};


class B: public A{
	public:
		int b_ka_public;
		
		void show(){
			cout<<"B show"<<endl;
		}
		
};


int main(){
	
	A a;
	B b;
	
	a.show();
	b.show();
	b.A::show();
	
	return 0;
}