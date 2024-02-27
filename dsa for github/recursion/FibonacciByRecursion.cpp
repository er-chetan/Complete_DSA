#include<iostream>
using namespace std;

int fibo(int n){
	if(n==1 || n==2){
		return 1;
	}
	
	return fibo(n-1)+fibo(n-2);
}

int main(){
	
	int n;
	cout<<"enter the value :"<<endl;
	cin>>n;
	
	int res=fibo(n);
	cout<<"sum is :"<<res;
	
	return 0;
}