#include<iostream>
using namespace std;


class A{
	
	private:
		int a_ka_private;
	
	protected:
		int a_ka_protected;
	
	public:
		int a_ka_public;
		
};


class B:protected A{

public:
	int b_ka_public;
	
	void showVariables(){	
		a_ka_public=90;
		a_ka_protected=12;
		cout<<a_ka_public<<" "<<a_ka_protected;
	}
	
};


int main(){
	
//	A a;
	B b;
	b.showVariables();
//	b.a_ka_public=56;
////	b.a_ka_protected=90;
//	cout<<"\n"<<b.a_ka_public;
	
	return 0;
}