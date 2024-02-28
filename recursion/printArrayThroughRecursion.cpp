#include<iostream>
using namespace std;

void print (int arr[],int n,int idx){
	if(idx==n){
		return;
	}
	
	cout<<arr[idx]<<" ";
	print(arr,n,idx+1);
}


int main(){
	
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	print(arr,n,0);
	
	return 0;
}