#include<iostream>
#include<climits>
using namespace std;
int main(){
	
	int n;
	cout<<"enter the size"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the element in array"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<endl;
	cout<<"enter the target"<<endl;
	int target;
	cin>>target;
	
	cout<<"print an array"<<endl;
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	int lo=0;
	int hi=n-1;
	bool find=false;
	int lowerbound,upperbound;
	while(lo<=hi){
		int mid=(lo+hi)/2;
		
		if(arr[mid]==target){
			upperbound=arr[mid+1];
			lowerbound=arr[mid-1];
			find =true;
			break;
		}else if(arr[mid]<target){
			lo=mid+1;
	   	}else{
			hi=mid-1;
		}
	}
	if(find==true){
		cout<<"found"<<" "<<"lowerbound"<<" "<<lowerbound<<" "<<"upperbound"<<" "<<upperbound;
	}else{
		lowerbound=arr[hi];
		upperbound=arr[lo];
		cout<<"not found"<<" "<<"lowerbound"<<" "<<lowerbound<<" "<<"upperbound"<<" "<<upperbound;
	}

	return 0;
}