#include<iostream>
using namespace std;
int main(){
	int n,m,i,j,s,x,y,d;
	
	cout<<"enter the size of stack"<<endl;
	cin>>n;
	
	int a[n];
	cout<<"enter the element in stack"<<endl;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	cout<<"print stack"<<endl;
	
	for(i=n-1;i>-1;i--){
		cout<<a[i]<<endl;
	}
	
	cout<<"enter the number of values to delete from the stack:"<<endl;
	cin>>s;
	
	int del[s];
	
	cout<<"enter the values"<<endl;
	
	for(d=s-1;d>-1;d--){
		cin>>del[d];
	}
	
	for(i=n-1;i>-1;i--){
		for(d=s-1;d>-1;d--){
			if(a[i]==del[d]){
				for(j=i;j<n;j++){
					a[j]=a[j+1];
				}
				break;
			}
		}
	}
	
	cout<<"updated stack"<<endl;
	
	for(i=n-s-1;i>-1;i--){
		cout<<a[i]<<endl;
	}
}
