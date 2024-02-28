#include<iostream>
#include<vector>
using namespace std;

void method1(vector <int>& v){
	int zero=0;
	int one=0;
	for(int i=0;i<v.size();i++){
		if(v[i]==0){
			zero++;
		}else{
			one++;
		}
	}
	
	for(int i=0;i<zero;i++){
		for(int i=0;i<zero;i++){
			v[i]=0;
		}
	}
//	first method of solving the question
	for(int i=0;i<v.size();i++){
		for(int i=zero;i<v.size();i++){
			v[i]=1;
		}
	}
}

void method2(vector <int>& v){
	int n=v.size();
	int i=0;
	int j=n-1;
	
	while(i<j){
		if(v[i]==0){
			i++;
		}else if(v[j]==1){
			j--;
		}else if(v[i]==1 && v[j]==0){
			v[i]=0;
			v[j]=1;
			i++;
			j--;
		}
	}
}


int main(){
	int n;
	cout<<"enter the size of an array"<<endl;
	cin>>n;
	vector <int> v;
	cout<<"Insert the element in array"<<endl;
	
	for(int i=0;i<n;i++){
		int q;
		cin>>q;
		v.push_back(q);
	}
	
	
	cout<<"print the array"<<endl;
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	
//	method1(v);
	method2(v);
	cout<<"print the array after sort"<<endl;
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	
	
	return 0;
}







