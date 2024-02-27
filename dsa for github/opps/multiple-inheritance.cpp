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


class B{

public:
	int b_ka_public;
};

class C:public B,public A{
	public:
		int c_ka_public;
	
	void showC(){
		a_ka_protected=80;
		a_ka_public=23;
		cout<<"in c class -> "<<a_ka_protected<<" "<<a_ka_public;
	}
};


int main(){
	C c;
	c.a_ka_public=20;
	c.b_ka_public=40;
	c.c_ka_public=60;
	cout<<"from main c class object"<<" "<<c.a_ka_public<<" "<<c.b_ka_public<<" "<<c.c_ka_public<<endl;
	c.showC();
	return 0;
}