//Given a sorted binary array, efficiently count the total number of 1’s in it.
//Input 1 : a = [0,0,0,0,1,1]
//Output 1: 2

#include<iostream>
#include<climits>
using namespace std;

int main(){
	int n;
	
	cout<<"enter the size of an array"<<endl;
	cin>>n;
	cout<<"enter the element in array"<<endl;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	
	cout<<"enter the targeted value"<<endl;
	int target;
	cin>>target;
	
	int lo=0;
	int hi=n-1,first;
	
	while(lo<=hi){
		int mid=lo+(hi-lo)/2;
		
		if(arr[mid]==target){
			if(arr[mid-1]==target){
				hi=mid-1;
			}else{
				first=mid;
				break;
			}
		}else if(arr[mid]<target){
			lo=mid+1;
		}else{
			hi=mid-1;
		}
	}
 
	int element=n-first;
	
	cout<<"number of 1's"<<" "<<element;
	return 0;

}

 