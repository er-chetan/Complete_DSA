#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
	
	int k=3;
	int arr[]={6,5,3,2,8,10,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	priority_queue<int,vector<int>,greater<int>> pq;
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	int idx=0;
	for(int i=0;i<n;i++){
		pq.push(arr[i]);
		if(pq.size()>k){
			arr[idx]=pq.top();
			idx++;
			pq.pop();
		}
	}
	
	while(pq.size()>0){
		arr[idx]=pq.top();
		idx++;
		pq.pop();
	}
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
		
	return 0;
}