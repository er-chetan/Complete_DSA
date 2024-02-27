#include<iostream>
#include<stack>
using namespace std;

int main(){
	
	int arr[]={3,1,2,5,4,6,2,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	int pgi[n];
	pgi[0]=-1;
	
	stack<int> st;
	st.push(arr[0]);
	for(int i=1;i<n;i++){
		while(st.size()>0 && arr[i]>st.top()){
			st.pop();
		}
		if(st.size()==0){
			pgi[i]=-1;
		}else{
			pgi[i]=st.top();
		}
		st.push(arr[i]);
	}
	cout<<endl;
	cout<<"stack ----- to proof "<<endl;
	
	while(st.size()>0){
		cout<<st.top()<<" ";
		st.pop();
	}
	cout<<endl;
	cout<<"array with next greater element --- "<<endl;
	for(int i=0;i<n;i++){
		cout<<pgi[i]<<" ";
	}
	
	
	return 0;
}