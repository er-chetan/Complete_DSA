#include<iostream>
using namespace std;
int main(){
	int n,m;
	cout<<"enter the row and col of sqaure matrix"<<endl;//square matrix has equal row and col//
	cin>>n;
	int a[n][n];
	cout<<"enter the element of the array"<<endl;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	
	cout<<"print the elements"<<endl;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	// transpose the element by swap the element //
	
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
				int temp=a[i][j];
				a[i][j]=a[j][i];
				a[j][i]=temp;				
		}
	}
	
	cout<<"after the array is transpose"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	cout<<"miror image of an array"<<endl;
	//by reversing the transpose array
	
	for(int i=0;i<n;i++){
		int r=n-1;
			for(int k=0;k<n;k++){
				if(r==k){
					break;
				}
				int temp=a[i][k];
				a[i][k]=a[i][r];
				a[i][r]=temp;
				r--;
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}


