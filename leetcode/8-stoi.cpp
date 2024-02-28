#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	
	string s="  word and";
	string ans="";
	
	for(int i=0;i<s.size();i++){
		
		if(s[i]==' '){
			continue;
		}else if(s[i]=='.'){
			break;
		}
		
		int num=s[i]-'0';
		
		if(ans.size()>1){
			if(s[i]=='0'){
				ans=ans+s[i];
				continue;
			}
		}
		if(num>9){
			cout<<"0";
			break;
		}else if(num<=9 && num>=1){
			ans=ans+s[i];
		}else if(s[i]=='+' || s[i]=='-'){
			ans=ans+s[i];
		}else{
			continue;
		}
	}

//	if(ans[1]-'0'>9){
//		cout<<"0";//return 0;
//	}
	
//	for(int i=1;i<ans.size();i++){
//		int num=ans[i]-'0';
//		if(ans[i]=='+' || ans[i]=='-' || num>9){
//			cout<<"0";//return 0;
//		}
//	}
	
//	long long n=stoll(ans);
//	
//	if(n<INT_MIN){
//		cout<<INT_MIN;	//return INT_MIN;
//	}else if(n>INT_MAX){
//		cout<<INT_MAX;	//return INT_MAX;
//	}
	
//	cout<<n; //return n;

}