#include<iostream>

#include<stack>
using namespace std;

int prio(char ch){
	if(ch=='+' || ch=='-'){
		return 1;
	}else{
		return 2;
	}
}

string solve(string val1, string val2,char ch){
	cout<<"function = "<<"val1="<<val1<<","<<"char="<<ch<<","<<"val2="<<" "<<val2<<endl;
	string s="";
	s.push_back(ch);
	s+=val1;
	s+=val2;
	return s;
}

int main(){
	string s="(7+9)*4/8-3";
	
	stack<string> val;
	stack<char> op;
	
	for(int i=0;i<s.size();i++){
		if(s[i]>=48 && s[i]<=57){
			val.push(to_string(s[i]-48));
			cout<<"value int push = "<<s[i]<<endl;
		}else{
			if(op.size()==0 ){
				op.push(s[i]);
				cout<<"char top = "<<op.top()<<endl;
			}else if(s[i]=='('){
				op.push(s[i]);
			}else if(op.top()=='('){
				op.push(s[i]);
			}else if(s[i]==')'){
				cout<<"bracket scenario starts -->> "<<endl;
				while(op.top()!='('){
					char ch=op.top();
					cout<<"pop op = "<<op.top()<<endl;
					op.pop();
					string val2=val.top();
					val.pop();
					string val1=val.top();
					val.pop();
					string ans=solve(val1,val2,ch);
					cout<<"ans = "<<ans<<endl;
					val.push(ans);
				}
				op.pop();
				cout<<"brackets is end"<<endl;//// open bracket ko bhi uda do
			}else if(prio(s[i])>prio(op.top())){
				op.push(s[i]);
			}else{
				while(op.size()>0 && prio(s[i]) <= prio(op.top())){
					char ch=op.top();
					cout<<"pop op = "<<op.top()<<endl;
					op.pop();
					string val2=val.top();
					val.pop();
					string val1=val.top();
					val.pop();
					string ans=solve(val1,val2,ch);
					cout<<"ans = "<<ans<<endl;
					val.push(ans);
				}
				op.push(s[i]);	
				cout<<"char top = "<<op.top()<<endl;
			}
		}
	}

 cout<<"\nremaining operators and elements"<<endl<<endl;
	while(op.size()>0){
		char ch=op.top();
		cout<<"pop op = "<<op.top()<<endl;
		op.pop();
		string val2=val.top();
		val.pop();
		string val1=val.top();
		val.pop();
		string ans=solve(val1,val2,ch);
		val.push(ans);
	}
	
	cout<<s<<" infix to prefix -->> "<<val.top()<<endl;
	
	return 0;
}