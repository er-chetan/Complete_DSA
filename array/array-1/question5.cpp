#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the size of an array"<<endl;
	cin>>n;
	int arr[n];
	
	cout<<"enter the elements in an array"<<endl;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int x=5;
	arr[0]=10;
	cout<<"10th value ="<<" "<<arr[0];
	
	
//	int temp,find;
//	
//	for(int i=0;i<n;i++){
//		temp=arr[i];
//		temp++;
//		if(arr[i+1]!=temp){
//			find=temp;
//			break;
//		}
//	}
//	cout<<"missing number is :"<<" "<<find;
	return 0;
}
	
	 