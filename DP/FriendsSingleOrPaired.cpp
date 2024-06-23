#include<iostream>
using namespace std;

int friends(int n){
	if(n==1) return 1;
	if(n==2) return 2;
	return friends(n-1)+(n-1)*friends(n-2);
}

int main(){
	
	cout<<"ans = "<<friends(5);
	
	return 0;
}