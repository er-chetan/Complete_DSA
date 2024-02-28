#include<iostream>
using namespace std;

//row wise printing
int main(){
	int row,col;
	cout<<"enter the row "<<endl;
	cin>>row;
	cout<<"enter the column"<<endl;
	cin>>col;
	int a[row][col];
	cout<<"enter the element in array"<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>a[i][j];
		}
	}
	cout<<"print array"<<endl;
	
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	//wave output is 7 8 9 6 5 4 1 2 3
	
	cout<<"shown wave pattern"<<endl;
	
	for(int i=row-1;i>=0;i--){
		if(i%2==0){
			for(int j=0;j<col;j++){
				cout<<a[i][j]<<" ";
			}
		}else {
			for(int j=col-1;j>=0;j--){
				cout<<a[i][j]<<" ";
			}
		}
	}
	return 0;
	
}


