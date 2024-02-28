#include<iostream>
using namespace std;

int main(){
	int m,n,p,q;
	
	cout<<"enter the row of first array "<<endl;
	cin>>m;
	cout<<"enter the column of first array"<<endl;
	cin>>n;
	int a[m][n];
	
	cout<<"enter the elements of first array"<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	cout<<"print first array"<<endl;
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"enter the row of second array "<<endl;
	cin>>p;
	cout<<"enter the column of second array"<<endl;
	cin>>q;
	int b[p][q];
	
	cout<<"enter the elements of second array"<<endl;
	for(int i=0;i<p;i++){
		for(int j=0;j<q;j++){
			cin>>b[i][j];
		}
	}
	cout<<"print second array"<<endl;
	
	for(int i=0;i<p;i++){
		for(int j=0;j<q;j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	if(n==p){
		cout<<"Multiplication of two matrix -:"<<endl;
		
		int res[m][q];
		for(int i=0;i<m;i++){
			for(int j=0;j<q;j++){
				int multi=0;
				for(int k=0;k<n;k++){
					multi=multi+a[i][k]*b[k][j];
				}
				res[i][j]=multi;
			}
		}
		
		for(int i=0;i<m;i++){
			for(int j=0;j<q;j++){
				cout<<res[i][j]<<" ";
			}
		cout<<endl;
		}
		
	}else{
		cout<<"multiplication of two matrix is not possible"<<endl;
	}
	
	
	
}