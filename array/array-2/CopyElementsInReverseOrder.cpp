#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cout<<"enter the sie of array-:"<<endl;
	cin>>n;
	
	vector <int> v(n);
	
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	vector <int> copy;
	int s;
	for(int i=v.size()-1;i>=0;i--){
		s=v[i];
		copy.push_back(s);
	}
		
	for(int i=0;i<copy.size();i++){
		cout<<copy[i]<<endl;
	}
	
	return 0;
	
}
