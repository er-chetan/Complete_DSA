#include<iostream>
#include<stack>
using namespace std;

string solve(string val1,string val2,char ch){
	cout<<"function = "<<"val1 = "<<val1<<","<<"val2 = "<<","<<val2<<","<<"char = "<<ch<<endl;
	string s="";
	s+=val1;
	s+=val2;
	s.push_back(ch);
	return s;
}

int main(){
	string s="-/*+79483";
	
	stack<string> val;
	
	for(int i=s.size()-1;i>=0;i--){
		if(s[i]>=48 && s[i]<=57){
			val.push(to_string(s[i]-48));
			cout<<"value int push = "<<s[i]<<endl;
		}else{
				char ch=s[i];
				cout<<"pop op = "<<s[i]<<endl;
				string val1=val.top();
				val.pop();
				string val2=val.top();
				val.pop();
				string ans=solve(val1,val2,ch);
				cout<<"ans = "<<ans<<endl;
				val.push(ans);
			}
		}

 
	
	cout<<s<<" prefix to postfix  -->> "<<val.top()<<endl;
	
	return 0;
}