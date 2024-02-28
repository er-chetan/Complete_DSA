#include<iostream>
using namespace std;
//column wise prinitng
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
	
	cout<<"column wise printing"<<endl;
	//output is 1 4 7 2 5 8 3 6 9 
	for(int j=0;j<col;j++){
		if(j%2==0){
			for(int i=0;i<row;i++){
				cout<<a[i][j]<<" ";
			}
		}else {
			for(int i=row-1;i>=0;i--){
				cout<<a[i][j]<<" ";
			}
		}
	}
	
	return 0;
}