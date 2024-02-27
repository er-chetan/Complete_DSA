#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	
	int arr[8]={45,34,23,12,6,5,3,2};
	
	int target=23;
	int lo=0;
	int hi=7;
	int index=-1;
	bool find=false;
	 
	while(lo<=hi){
		int mid=lo+(hi-lo)/2;
		if(arr[mid]==target){
			index=mid;
			find=true;
			break;
		}else if(arr[mid]>target){
			lo=mid+1;
		}else{
			hi=mid-1;
		}
		
		cout<<" lo :"<<lo<<" "<<"mid :"<<mid<<" "<<" hi :"<<hi<<endl;
	}
	
	cout<<" lo :"<<lo<<" "<<"mid :"<<index<<" "<<" hi :"<<hi<<endl;
	
	if(find==true){
		cout<<"index of target"<<" "<<index;
	}else{
		cout<<"not found";
	}
	
	return 0;
}