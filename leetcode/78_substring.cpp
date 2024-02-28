#include<iostream>
#include<vector>
using namespace std;

//void extend(string s,string c,int idx){
//	if(idx==s.size()){
//		cout<<c<<endl;
//		return;
//	}
//	char ch=s[idx];
//	extend(s,c,idx+1);
//	extend(s,c+ch,idx+1); /// there is problem with vector string that not cotain charcter s[i]
//}


void printsubset(int arr[],int n,int idx,vector<int> ans){
	if(idx==n){
		
		for(int i=0;i<ans.size();i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
		return;
	}
	
	printsubset(arr,n,idx+1,ans);
	
	ans.push_back(arr[idx]);
	
	printsubset(arr,n,idx+1,ans);
	
	
}

int main(){
//	string orignal="abc";
//	string change="";
//	extend(orginal,change,0);
	
	
	int arr[3]={1,2,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	vector<int>v;
	printsubset(arr,n,0,v);
	
}