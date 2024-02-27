#include<iostream>
#include<string>
#include<algorithm>
#include<conio.h>

using namespace std;

int main(){
	string s="RSGBMSXXYYZZASNNGDGXYYSDIOJVGZ";
	string str="";
	int n=s.size();
	for(int i=0;i<n;i++){
		if(s[i]>='X'){
			str=str+s[i];
		}
	}
	
	cout<<str;
	
	
	
	//now sort the string str through bubble sort


	int m=str.size();
	int i,j;
	char temp;
	for(i=0;i<m-1;i++){
		bool find=true;
		for(j=0;j<m-1-i;j++){// optimized the code
			if(str[j]>str[j+1]){
				temp=str[j];
				str[j]=str[j+1];
				str[j+1]=temp;
				find=false;
			}
		}
		if(find==true){ //more optimized the code
			break;
		}
	}

	cout<<endl;
	cout<<str;
		
		
	return 0;	
}