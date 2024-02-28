#include<iostream>
#include<stack>
using namespace std;

bool isbalanced(string s){
	if(s.length()%2!=0){
		return false;
	}
	
	stack<char> st;
	for(int i=0;i<s.length();i++){
		if(s[i]=='('){
			st.push('(');
		}else{
			if(st.size()==0){
				return false;
			}else{
				st.pop();
			}
		}
	}
	
	if(s.length()==0){
		return false;
	}else{
		return true;
	}
}
int main(){
	
	string s="())()(";
	cout<<isbalanced(s);
	
	return 0;
}