#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

fact(int i,int n){
	if(n==1|| n==0){
		return 1;
	}
	return n*fact(i,n-i);
}

int main(){
	
	cout<<fact(1,5);
	
	return 0;
}