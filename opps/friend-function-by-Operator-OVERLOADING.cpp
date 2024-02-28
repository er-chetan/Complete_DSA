#include<iostream>
using namespace std;


class ComplexNumber{
	
	public:
		int imaginary;
		int real;
		
		friend ComplexNumber operator +(ComplexNumber &c1,ComplexNumber &c2);
		
};

ComplexNumber operator +(ComplexNumber &c1,ComplexNumber &c2){
	ComplexNumber c3;
	c3.imaginary=c1.imaginary+c2.imaginary;
	c3.real=c1.real+c2.real;
	return c3;			
}

int main(){
	
	ComplexNumber c1,c2,c3;
	c1.imaginary=10;
	c1.real=12;
	c2.imaginary=8;
	c2.real=18;
	
	c3=c1+c2;
	cout<<c3.imaginary<<" "<<c3.real<<endl;
	
	return 0;
}
		
		
		