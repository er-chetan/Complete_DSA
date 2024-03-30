#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
	
	int k=3;
	int arr[]={10,20,-4,6,18,2,105,118};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	priority_queue<int,vector<int>,greater<int>> pq;
	
	for(int i=0;i<n;i++){
		pq.push(arr[i]);
		if(pq.size()>k){
			pq.pop();
		}
	}
	
	cout<<pq.top();
		
	return 0;
}