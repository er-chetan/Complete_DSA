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
	
	cout<<endl;
	
	int lo=0;
	int hi=n-1,lastOccur;
 
	while(lo<=hi){
		int mid=lo+(hi-lo)/2;
		
		if(arr[mid]==target){
			if(arr[mid+1]==target){
				lo=mid+1;
			}else{
				lastOccur=mid;
				break;
			}
		}else if(arr[mid]<target){
			lo=mid+1;
	   	}else{
			hi=mid-1;
		}
	}
	 
	cout<<"last Occurence"<<" "<<lastOccur;
}