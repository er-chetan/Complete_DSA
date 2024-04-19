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
		cout<<a_ka_public<<" "<<a_ka_protected<<endl;
	}
};

class C:public B{
	public:
		int c_ka_public;
	
	void showC(){
		a_ka_protected=80;
		cout<<"in c class -> "<<a_ka_protected;
	}
};


int main(){
	B b;
	b.showVariables();
	C c;
	c.b_ka_public=10;
	c.c_ka_public=20;
	cout<<c.b_ka_public<<"from main c class object"<<c.c_ka_public<<endl;
	c.showC();
	return 0;
}