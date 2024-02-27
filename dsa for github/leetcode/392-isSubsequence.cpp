#include<iostream>
using namespace std;
int main(){
	
	string s = "axc";
	string t = "ahbgdc";
	bool find =false;
	int j=0;
	for(int i=0;i<t.size();i++){
		if(t[i]==s[j]){
			cout<<t[i]<<"=="<<s[j]<<endl;
			j++;
		}
		if(j>=s.size()){
			find=true;
			break;
		}
		cout<<"i="<<i<<endl;
	}
	
	return 0;
}