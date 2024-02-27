#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
//space remove and print without space


string repeat(string s){
	stringstream ss(s);
	string temp;
	
	vector<string> vstring;
	
	while (ss>>temp){
		vstring.push_back(temp);
	}
	
	sort(vstring.begin(),vstring.end());
	
	int n=vstring.size();
	
	int max=0,count;
	string tem;
	int store;
	for(int i=0;i<n-1;i++){
		count=0;
		for(int j=i+1;j<n;j++){
			if(vstring[i]==vstring[j] ){
				count++;
				store=i;
			}
			if(max<count){
				max=count;
				tem=vstring[i];
			}
	
		}
	}
	
	
	return tem;
	
}



int main(){
	
//	string str="the chetan is engineer";
//	
//	stringstream ss(str);
//	string temp;
//	//removal of space
//	while(ss>>temp){
//		cout<<temp;
//	}
	
//question return the word which is most time repeated
	
	string str="the chetan is an engineer most name is is name name name chetan";
	
	repeat(str);
		
	cout<<"most time repeated:"<<repeat(str);
	
	return 0;
	
}


