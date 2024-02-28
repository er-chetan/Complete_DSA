#include<iostream>
#include<vector>
using namespace std;

string remove(string s,string v,int n,int idx){
	if(idx==n){
	 	return v;
	}
	
	if(s[idx]!='a'){
		v=v+s[idx];
	}
	
	return remove(s,v,n,idx+1);
	
}

//---------------> second method <----------------//

void remove2(string ans,string original,int idx){
	if(original.length()==idx){
		cout<<ans;
		return ;
	}
	char ch=original[idx];
	if(ch=='a'){
		remove2(ans,original,idx+1);
	}else{
		remove2(ans+ch,original,idx+1);
		
	}
}

int main(){
	string s="chetan is a good aa boy";
	string v="";
	
	cout<<"after"<<" "<<remove(s,v,s.size(),0)<<endl;
 	remove2(v,s,0);
	
	
	
	
	
	
//----------------> basic <----------------//	
//	for(int i=0;i<s.size();i++){
//		if(s[i]!='a'){
//			v.push_back(s[i]);
//		}
//	}
//	
//	cout<<v;
}