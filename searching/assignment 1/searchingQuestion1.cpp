//Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If ‘x’
//does not exist return -1.
//Input 1: arr[] = {1,2,3,3,4,4,4,5} , x = 4
//Output 1: 6

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
	int hi=n-1,last;
	
	while(lo<=hi){
		int mid=lo+(hi-lo)/2;
		
		if(arr[mid]==target){
			if(arr[mid+1]==target){
				lo=mid+1;
			}else{
				last=mid;
				break;
			}
		}else if(arr[mid]<target){
			lo=mid+1;
	   	}else{
			hi=mid-1;
		}
	}
	
	cout<<"last occurence"<<" "<<last;
 
 

}