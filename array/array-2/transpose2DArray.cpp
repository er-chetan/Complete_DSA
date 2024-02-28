#include<iostream>
using namespace std;
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
	
	cout<<"transpose of an array"<<endl;
	
	
	//holding the value of i in printing in this method-;
//	for(int i=0;i<col;i++){
//		for(int j=0;j<row;j++){
//			cout<<a[j][i]<<" ";
//		}
//		cout<<endl;
//	}
	
	//another method-: 
	//there is same variable in loops just change exchange the no.of col and row
	//holding value of j in printing 
	
//	for(int j=0;j<col;j++){
//		for(int i=0;i<row;i++){
//			cout<<a[i][j]<<" ";
//		}
//		cout<<endl;
//	}


	//inserting the element of transpose element in another array-;
	
	int t[col][row];
	
	
	for(int i=0;i<col;i++){
		for(int j=0;j<row;j++){
			t[i][j]=a[j][i];
		}
		cout<<endl;
	}
	
	for(int i=0;i<col;i++){
		for(int j=0;j<row;j++){
			cout<<t[j][i]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}