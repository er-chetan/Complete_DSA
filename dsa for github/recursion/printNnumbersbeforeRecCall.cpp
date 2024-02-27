#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(int n){
	if(n==0){
		return ;//base case
	}
	cout<<n<<endl;//work
	print(n-1);//call
	
}

int main(){
	
	print(5);
	
	return 0;
}