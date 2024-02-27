#include<iostream>
using namespace std;

int numsquare(int a, int b){
	if(a>b){
		return 0;
	}else if(a%2!=0){
		return a+numsquare(a+1,b);
	}else{
		return numsquare(a+1,b);
	}
}

int main(){
	int a,b;
	cout<<"enter the first number :"<<endl;
	cin>>a;
	cout<<"enter the second number :"<<endl;
	cin>>b;
	
	int result=numsquare(a,b);
	cout<<result;
	return 0;
}