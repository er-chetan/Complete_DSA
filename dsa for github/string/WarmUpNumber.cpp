#include<iostream>
#include<string>

using namespace std;
int main(){
	string s;
	cout<<"enter the string :";
	getline(cin,s);
	
	int n=s.size();
	int count=0;
	for(int i=0;i<n;i++){
		if(n==1){
			cout<<"not compare with next element";
			break;
		}else if(n==2){
			if(s[0]!=s[1]){
				count=1;
				break;
			}
		}else if(i==0){
			if(s[i]!=s[i+1]){
				count++;
			}
		}else if(i==n-1){
			if(s[i]!=s[i-1]){
				count++;
			}
		}else if(s[i-1]!=s[i] && s[i+1]!=s[i]){
			count++;
		}
	}
	
	cout<<"number of charctar are not same to the neighbour :"<<" "<<count;
	
}