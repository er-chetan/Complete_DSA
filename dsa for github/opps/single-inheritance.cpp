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


class B:public A{

public:
	int b_ka_public;
	
	void showVariables(){	
		a_ka_public=90;
		a_ka_protected=12;
		cout<<a_ka_public<<" "<<a_ka_protected;
	}
};


int main(){
	B b;
	b.showVariables();
	
	return 0;
}