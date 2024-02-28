#include<iostream>
using namespace std;

class A{
	private:
	int a_ka_private=10;
	
	public:
		friend void show(A &a);
};

void show(A &a){
	cout<<"hii, i am your friend!! give me your private data member -> "<<a.a_ka_private;
}

int main(){
	
	A a;
	show(a);
	
	return 0;
}