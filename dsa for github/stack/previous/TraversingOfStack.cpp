#include<iostream>
using namespace std;
int main(){
	int n,i;
	cout<<"enter the size of an array"<<endl;
	cin>>n;
	
	int a[n];
	
	cout<<"enter the element in stack"<<endl;
	
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	cout<<"print the element "<<endl;
	
	for(i=n-1;i>-1;i--){
		cout<<a[i]<<endl;
	}
	
	return 0;
}
