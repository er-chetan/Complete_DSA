//question print all the increasing subsequence of length k from first n natural numbers//

#include<iostream>
#include<vector>
using namespace std;


void subsequence(int arr[],int n,int idx,vector<int> ans,int k){
	if(idx==n){
		if(ans.size()==k){
			for(int i=0;i<ans.size();i++){
				cout<<ans[i]<<" ";
			}
		cout<<endl;
		}
		return ;
	}
	
	subsequence(arr,n,idx+1,ans,k);
	ans.push_back(arr[idx]);
	subsequence(arr,n,idx+1,ans,k);
}
int main(){
	int n=5,idx=0,k=3;
	int arr[n]={1,2,3,4,5};
	vector<int> v;
	subsequence(arr,n,idx,v,k);
	
	
	return 0;
}