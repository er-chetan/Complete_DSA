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
	
	cout<<"spiral printing"<<endl;
	
	int minr=0,minc=0;
	int maxr=row-1,maxc=col-1;
	int total=row*col,count=0;
	
	while(minr<=maxr && minc<=maxc){
		for(int j=minc;j<=maxc && count<total;j++){
			cout<<a[minr][j];
			count++;
		}
		minr++;
		
		for(int i=minr;i<=maxr && count<total;i++){
			cout<<a[i][maxc];
			count++;
		}
		maxc--;
		
		for(int j=maxc;j>=minc && count<total;j--){
			cout<<a[maxr][j];
			count++;
		}
		maxr--;
		
		for(int i=maxr;i>=minr && count<total;i--){
			cout<<a[i][minc];
			count++;
		}
		minc++;
	}
	
	return 0;	
}




