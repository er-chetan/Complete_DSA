#include<iostream>
using namespace std;
int main(){
	
	int i,j,n,s;
	
	cout<<"enter the size of an array"<<endl;
	cin>>n;
	
	int a[n];
	
	cout<<"enter the element"<<endl;
	
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	cout<<"print the element "<<endl;
	
	for(i=n-1;i>-1;i--){
		cout<<a[i]<<endl;
	}
	
	cout<<"enter the element "<<endl;
	cin>>s;
	
	for(i=n-1;i>-1;i--){
		if(a[i]==s){
			for(j=i;j<n;j++){
				a[j]=a[j+1];
			}
			break;
		}
	}
	
	cout<<"updated "<<endl;
	for(i=n-2;i>-1;i--){
		cout<<a[i]<<endl;
	}
}
