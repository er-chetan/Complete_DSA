#include<iostream>
#include<stack>

/////////////// this is called postfix evaluation ///////////////////
using namespace std;

int solve(int val1, int val2,char ch){
	cout<<"function = "<<"val1="<<val1<<","<<"char="<<ch<<","<<"val2="<<" "<<val2<<endl;
	if(ch=='+'){
		return val1+val2;
	}else if(ch=='-'){
		return val1-val2;
	}else if(ch=='*'){
		return val1*val2;
	}else{
		return val1/val2;
	}
}

int main(){
	string s="79+4*8/3-";
	
	stack<int> val;
	
	for(int i=0;i<s.size();i++){
		if(s[i]>=48 && s[i]<=57){
			val.push(s[i]-48);
			cout<<"value int push = "<<s[i]<<endl;
		}else{
				char ch=s[i];
				cout<<"pop op = "<<s[i]<<endl;
				int val2=val.top();
				val.pop();
				int val1=val.top();
				val.pop();
				int ans=solve(val1,val2,ch);
				cout<<"ans = "<<ans<<endl;
				val.push(ans);
			}
		}

 
	
	cout<<s<<" postfix evaluation -->> "<<val.top()<<endl;
	
	return 0;
}