#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(int n){
	if(n==0){
		return ;
	}//base case
	print(n-1);//call
	cout<<n<<endl;//work
}

int main(){
	
	print(5);
	
	return 0;
}