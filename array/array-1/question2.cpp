#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n;
	cout<<"enter the size"<<endl;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int temp=INT_MIN;
	for(int i=0;i<n;i++){
		if(temp<arr[i]){
			temp=arr[i];
		}
	}
	int smax=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]!=temp && smax<arr[i]){
			smax=arr[i];
		}
		
	}
	
	cout<<"second largest element"<<" "<<smax;
}