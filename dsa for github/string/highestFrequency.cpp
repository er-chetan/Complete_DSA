#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	//most important//
	
	string str="chetan is a  good ss bb boy";
	int n=str.size();
	vector<int> v(26,0);
	
	for(int i=0;i<n;i++){
		char ch=str[i];
		int ascii=(int)ch;
		v[ascii-97]++;//it gives the index value
	}
	
	int max=0;
	
	for(int i=0;i<26;i++){
		if(v[i]>max){
			max=v[i];
		}
	}
	
	for(int i=0;i<26;i++){
		if(v[i]==max){
			int ascii=i+97;
			char ch=(char)ascii;
			cout<<ch<<" "<<max<<endl;
		}
	}
	
	
	return 0;
}







