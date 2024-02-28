#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
 
	cout<<"enter the size of row :";
	int row;
	cin>>row;
	cout<<"enter the size of column :";
	int col;
	cin>>col;
	vector<vector<int>>v;
	int ele;
	cout<<"enter the element :"<<endl;
	
	for(int i=0;i<row;i++){
		vector <int> b;
		for(int j=0;j<col;j++){
			cin>>ele;
			b.push_back(ele);
		}
		v.push_back(b);
	}
	
	cout<<"enter the target :"<<endl;
	int target;
	cin>>target;
	bool find=false;
	int lo=0;
	int hi=(row*col)-1;
	while(lo<=hi){
		int mid=lo+(hi-lo)/2;
		cout<<"lo ->"<<lo<<" "<<"mid ->"<<mid<<" "<<"hi ->"<<hi<<endl;
		if(v[mid/col][mid%col]==target){
			find=true;
		}if(v[mid/col][mid%col]>target){
			hi=mid-1;
		}else{
			lo=mid+1;
		}
		
	}
	
	
	if(find==true){
		cout<<"true";
	}else{
		cout<<"false";
	}
	
	
	
	return 0;
}