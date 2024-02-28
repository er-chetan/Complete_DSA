#include<iostream>
using namespace std;

bool powerORnot(int n,int a){
	if(n==1){
			return true;
		}
	if(n%a==0){
		n=n/2;
		powerORnot(n,a);
 }else {
		return false;
	}
}

int main(){
	int n,a;
	cout<<"enter the number :"<<endl;
	cin>>n;
	cout<<"enter the power number :"<<endl;
	cin>>a;
	
	if(powerORnot(n,a)){
		cout<<"true";
	}else{
		cout<<"false";
	}
	
	return 0;
}
	             