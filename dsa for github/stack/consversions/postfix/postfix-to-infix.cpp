#include<iostream>
#include<stack>
using namespace std;

string solve(string val1,string val2,char ch){
	cout<<"function = "<<"val1="<<val1<<","<<"char="<<ch<<","<<"val2="<<" "<<val2<<endl;
	string s="";
	s+=val1;
	s.push_back(ch);
	s+=val2;
	return s;
}

int main(){
	string s="79+4*8/3-";
	
	stack<string> val;
	
	for(int i=0;i<s.size();i++){
		if(s[i]>=48 && s[i]<=57){
			val.push(to_string(s[i]-48));
			cout<<"value int push = "<<s[i]<<endl;
		}else{
				char ch=s[i];
				cout<<"pop op = "<<s[i]<<endl;
				string val2=val.top();
				val.pop();
				string val1=val.top();
				val.pop();
				string ans=solve(val1,val2,ch);
				cout<<"ans = "<<ans<<endl;
				val.push(ans);
			}
		}

 
	
	cout<<s<<" postfix to infix  -->> "<<val.top()<<endl;
	
	return 0;
}