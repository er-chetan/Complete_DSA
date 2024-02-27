#include<iostream>
#include<algorithm>
using namespace std;


bool ispalindrome(string s,int i,int j){
	if(i>j){
		return true;
	}
	
	if(s[i]==s[j]){
		return ispalindrome(s,i+1,j-1);
	}else{
		return false;
	}
}
int main(){
	
	string s="abcba";
	int i=0,j=s.size()-1;
	bool find=true;
	while(i<j){
		if(s[i]!=s[j]){
			find=false;
		}
		i++;
		j--;
	}
	
	if(find==false){
		cout<<"not palindrome"<<endl;
	}else{
		cout<<"yes palindrome"<<endl;
	}
	
	///////////------------by recursion--------------//////////////////
	
	
	cout<<"by recursion"<<" "<<ispalindrome(s,0,s.size()-1);
	
	
	
	return 0;
}