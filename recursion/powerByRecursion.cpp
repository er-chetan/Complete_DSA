#include<iostream>
using namespace std;

int power(int a,int b){
	if(b==1){
		return a;
	}
	
//	if(b==0){
//		return 1;
//	}// both are comfartable
	
	return a*power(a,b-1);	
}

int main(){
	int a,b;
	cout<<"enter the number"<<endl;
	cin>>a;
	cout<<"enter the power"<<endl;
	cin>>b;
	int result=power(a,b);
	cout<<"a raised to the power b :"<<" "<<result;
}