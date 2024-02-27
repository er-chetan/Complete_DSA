#include<iostream>
using namespace std;


void calculatearea(int l,int b){
	cout<<"area of rectangle"<<"="<<l*b<<endl;
}

void calculatearea(int l){
	cout<<"area of sqaure"<<"="<<l*l<<endl;
}

void calculatearea(float r){
	cout<<"area of circle"<<"="<<3.14*r*r;
}

int main(){
	
	calculatearea(3,4);
	calculatearea(4);
	calculatearea(1.3f);
	
	
	return 0;
}