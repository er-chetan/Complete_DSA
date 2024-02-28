#include<iostream>
#include<algorithm>
using namespace std;

int maxelement(int arr[],int n,int idx,int maxele){
	if(idx==n){
		return maxele;
	}
	
	if(maxele<arr[idx]){
		maxele=arr[idx];
	}

	maxelement(arr,n,idx+1,maxele);
	
}


//----------------- without using max variable ------------------//

int maxelement2(int arr[],int n,int idx){
	if(idx==n){
		return 0;
	}
	
	return max(arr[idx],maxelement2(arr,n,idx+1));//max function
}


int main(){
	
	int arr[]={1,2,3,4,50,6,7,8,9,10};
	int maxele=INT_MIN;
	int n=sizeof(arr)/sizeof(arr[0]);
	
	cout<<"maximum element"<<"="<<maxelement(arr,n,0,maxele)<<endl;
	cout<<"maximum element 2"<<"="<<maxelement2(arr,n,0);
	
	return 0;
}