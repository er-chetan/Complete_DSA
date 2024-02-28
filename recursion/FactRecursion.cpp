#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

fact(int n){
	if(n==1|| n==0){
		return 1;
	}
	return n*fact(n-1);
}

int main(){
	
	cout<<fact(5);
	
	return 0;
}