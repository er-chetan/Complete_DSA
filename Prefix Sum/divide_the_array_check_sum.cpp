#include<iostream>
#include<vector>

using namespace std;
int main(){
	
//	int arr[]={1,2,3,4,5,6,7,8,9};
//	int n=sizeof(arr)/sizeof(arr[0]);
//	cout<<"array : ";
//	for(int i=0;i<n;i++){
//		cout<<arr[i]<<"  ";
//	}
//	int pre[n];
//	pre[0]=arr[0];
//	for(int i=1;i<n;i++){
//		pre[i]=arr[i]+pre[i-1];
//	}
//	cout<<endl;
//	cout<<"pre : ";
//	for(int i=0;i<n;i++){
//		cout<<pre[i]<<"  ";
//	}
	
//	 for understanding the flow

//	int idx=5;
//	cout<<endl;
//	cout<<pre[5]<<" "<<(pre[n-1]-pre[5])<<endl;
//	if(2*pre[5]==pre[n-1]){
//		cout<<"equal";
//	}else{
//		cout<<"not equal";
//	}
//	


////   which index so a array is changed

	int arr[]={1,2,3,4,5,5,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"array : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"  ";
	}
	int pre[n];
	pre[0]=arr[0];
	for(int i=1;i<n;i++){
		pre[i]=arr[i]+pre[i-1];
	}
	cout<<endl;
	cout<<"pre : ";
	for(int i=0;i<n;i++){
		cout<<pre[i]<<"  ";
	}
	
	bool find=true;
	int idx;
	for(int i=1;i<n;i++){
		if(2*pre[i]==pre[n-1]){
			find=false;
			idx=i;
			break;
		}
	}
	
	if(find==false){
		cout<<"it can be partition at : "<<idx;
	}else{
		cout<<"it can't be partition";
	}
	
	
	return 0;
}