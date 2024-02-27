#include<iostream>
using namespace std;

void printsum(int sum,int n){
	if(n==0){
		cout<<sum<<endl;
		return;
	}
	printsum(sum+n,n-1);	
}

int main(){
	int n;
	cout<<"enter the numbers"<<endl;
	cin>>n;
	int sum=0;
	printsum(sum,n);
	
}