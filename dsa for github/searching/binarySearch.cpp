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
	int index;
	while(lo<=hi){
		int mid=(lo+hi)/2;
		
		if(arr[mid]==target){
			index=mid;
			find =true;
			break;
		}else if(arr[mid]<target){
			lo=mid+1;
			
		}else{
			hi=mid-1;
			 
			 
		}
	}
	
	if(find==true){
		cout<<"found"<<" "<<index;
	}else{
		cout<<"not found";
	}

	return 0;
}