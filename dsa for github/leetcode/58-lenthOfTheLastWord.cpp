#include<iostream>
using namespace std;
int main(){
	
	string s = "W ";
	int n=s.size();
	int count=0;
	
	for(int i=n-1;i>=0;i--){
		if(s[i]==' '){
			continue;
		}else{
			count++;
			if(i==0){
				break;///// this was an error in leetcode that is run time error////
			}
			if(s[i-1]==' '){
				break;
			}
		}
	}
	
	
	cout<<"last word"<<"-->"<<count;
	return 0;
}