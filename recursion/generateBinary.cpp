#include<iostream>
using namespace std;

void generateBinary(string s,int n){
	if(n==0){
		cout<<s<<endl;
		return;
	}
	generateBinary(s+'0',n-1);
	if(s=="" || s[s.size()-1]=='0'){
		generateBinary(s+'1',n-1);
	}
}
int main(){
	
	int n=3;
	generateBinary("",n);
	return 0;
}