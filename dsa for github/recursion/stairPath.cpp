#include<iostream>
using namespace std;

int fibo(int n){
	if(n<=0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	
	if(n==2){
		return 2;
	}
	if(n==3){
		return 4;
	}
	
	return fibo(n-1)+fibo(n-2)+ fibo(n-3);
}

int main(){
	
	int n;
	cout<<"enter the value :"<<endl;
	cin>>n;
	
	int res=fibo(n);
	cout<<"sum is :"<<res;
	
	return 0;
}