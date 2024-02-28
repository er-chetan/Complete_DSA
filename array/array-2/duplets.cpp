#include<iostream>
#include<vector>
using namespace std;
int main(){
	int target;
	cout<<"enter the target"<<endl;
	cin>>target;
	int n;
	cout<<"enter the size of the array"<<endl;
	cin>>n;
	vector <int> v;
	for(int i=0;i<n;i++){
		int input;
		cin>>input;
		v.push_back(input);
	}
	cout<<"doublet is -:"<<endl;
	
	for(int i=0;i<v.size()-1;i++){
		for(int j=i+1;j<v.size();j++){
			if(v[i]+v[j]==target){
				cout<<i<<" "<<j<<endl;
			}
		}
	}
	
	return 0;
}