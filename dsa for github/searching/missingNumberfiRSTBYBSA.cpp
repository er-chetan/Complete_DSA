#include<iostream>
#include<climits>
using namespace std;
//given a sorted array of non-negative number distinct integer, 
//find the smallest missing nonb-negative element in it
int main(){
	
	int n;
	cout<<"enter the size"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the element in array"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	 
	
	int lo=0,hi=n-1,ans;
	
	while(lo<=hi){
		int mid=lo+(hi-lo)/2;
		if(arr[mid]==mid){
			lo=mid+1;
		}else{
			ans=mid;
			hi=mid-1;
		}
	}
	
	cout<<"missing number by binary search"<<" "<<ans;
	return 0;
	
}