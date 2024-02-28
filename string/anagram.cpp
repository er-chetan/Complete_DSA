#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string str1="chetAan";
//	string str2="hatecn";
//	
//	
//	sort(str1.begin(),str1.end());
//	sort(str2.begin(),str2.end());  
//	
//	
//	if(str1==str2){
//		cout<<"true";
//	}else{
//		cout<<"false";

//	}




cout<<str1;

	for(int i=0;i<str1.size();i++){
		if(str1[i]==isalnum(str1[i])){
			continue;
		}
		cout<<str1;
	}
	
}

