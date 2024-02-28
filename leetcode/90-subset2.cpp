//Example 1:
//
//Input: nums = [1,2,2]
//Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]
//Example 2:
//
//Input: nums = [0]
//Output: [[],[0]]

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void helper(vector<int>& nums, vector<int> ans, vector<vector<int>>& finalAns, int idx,bool flag){
    if(idx==nums.size()){
        
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
		}
		cout<<endl;
		return;
	}
    
    
	    
	int r=nums[idx];
	
	if(idx==nums.size()){
		if(flag==true){
			helper(nums,ans,finalAns,idx+1,true);
	    	ans.push_back(nums[idx]);
	    	helper(nums,ans,finalAns,idx+1,true);
	    	return ;
		}
	}
	
	int t=nums[idx+1];    
    
    if(r==t){
    	if(flag==true){
	    	helper(nums,ans,finalAns,idx+1,false);
	    	ans.push_back(nums[idx]);
	    	helper(nums,ans,finalAns,idx+1,true);
		}
	}else{
		if(flag==true){
	    	helper(nums,ans,finalAns,idx+1,true);
	    	ans.push_back(nums[idx]);
	    	helper(nums,ans,finalAns,idx+1,true);
		}
	}

		 
      
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> finalAns;
        helper(nums,ans,finalAns,0,true);
        return finalAns;
}

int main(){
	int n;
	cout<<"enter the size of the vector"<<endl;
	cin>>n;
	vector<int> nums;
	cout<<"enter the element in numsector"<<endl;
	for(int i=0;i<n;i++){
		int ele;
		cin>>ele;
		nums.push_back(ele);
	}
	
	
	subsetsWithDup(nums);

	return 0;
}