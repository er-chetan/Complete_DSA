#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
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
	
	sort(nums.begin(),nums.end());
	int temp,count=1;
	for(int i=n-1;i>=1;i--){
		 
		if(nums[i]!=nums[i-1]){
			count++;
		}
		
		if(count==3){
			temp=nums[i-1];
			break;
		}
	}
	
	if(count==3){
		cout<<"third maximum number"<<" "<<temp;
	}else{
		cout<<"not found give max value"<<" "<<nums[n-1];
	}
	
	
	return 0;
}