#include<iostream>
using namespace std;


class ComplexNumber{
	
	public:
		int imaginary;
		int real;
		
//		ComplexNumber add_one(ComplexNumber &c1,ComplexNumber &c2){
//			ComplexNumber c3;
//			c3.imaginary=c1.imaginary+c2.imaginary;
//			c3.real=c1.real+c2.real;
//			return c3;
//		}
//		ComplexNumber add_second(ComplexNumber &c2){/// for explaination
//			ComplexNumber c3;
//			c3.imaginary=this->imaginary+c2.imaginary;
//			cout<<this->imaginary<<" "<<c2.imaginary<<endl;
//			c3.real=this->real+c2.real;
//			cout<<this->real<<" "<<c2.real<<endl;
//			return c3;
//		}	

			
		ComplexNumber operator +(ComplexNumber &c2){
			ComplexNumber c3;
			c3.imaginary=this->imaginary+c2.imaginary;
			c3.real=this->real+c2.real;
			return c3;
		}
		
		ComplexNumber operator -(ComplexNumber &c2){
			ComplexNumber c3;
			c3.imaginary=this->imaginary-c2.imaginary;
			c3.real=this->real-c2.real;
			return c3;
		}
		
	
};

int main(){
	
	ComplexNumber c1,c2;
	c1.imaginary=10;
	c1.real=12;
	c2.imaginary=8;
	c2.real=18;
	
//	ComplexNumber c3;
//	ComplexNumber result =c3.add_one(c1,c2);// nya object bnaya
//	cout<<result.imaginary<<" "<<result.real;

//	ComplexNumber c3;
//	c3=c1.add_second(c2);
//	cout<<c3.imaginary<<" "<<c3.real;
	
	ComplexNumber c3,c4;
	c3=c1+c2;
	c4=c1+c2+c3;
	cout<<c3.imaginary<<" "<<c3.real<<endl;
	cout<<c4.imaginary<<" "<<c4.real;
	
	
}