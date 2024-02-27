#include<iostream>
using namespace std;

int printsum1(int sum1,int n){
	if(n==0){
		return sum1;
	}//by parametrised
	
	return printsum1(sum1+n,n-1);	
}

int printsum2(int n){
	if(n==0){//by return
		return 0;
	}
	
	return n+printsum2(n-1);	
}

int main(){
	int n;
	cout<<"enter the numbers"<<endl;
	cin>>n;
	int sum1=0;
	cout<<printsum1(sum1,n)<<endl;
	cout<<printsum2(n);
}