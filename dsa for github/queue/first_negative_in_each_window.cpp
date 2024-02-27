#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){
	
	int arr[]={0,-1,-2,3,4,-5,6,4,7,-8};
	int n=sizeof(arr)/sizeof(arr[0]);
	vector<int>ans;
	queue<int> q;
	
	for(int i=0;i<n;i++){
		if(arr[i]<0){
			q.push(i);
		}
	}
	
	int i=0;
	int k=3;
	
	while(i<=n-k){
		
		while(q.size()>0 && q.front()<i){
			q.pop();
		}
		if(q.size()==0 || q.front()>=i+k){
			ans.push_back(0);
		}else{
			ans.push_back(arr[q.front()]);
		}
		i++;
	}
	
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
	
	
	return 0;
}