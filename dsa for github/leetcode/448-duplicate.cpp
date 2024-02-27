#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n=8;
	int num[n]={4,3,2,7,8,2,3,1};
	
	for(int i=0;i<n;i++){
		cout<<num[i]<<" ";
	}
	
	vector<int> nums(n);
	
	for(int i=0;i<n;i++){
		nums[i]=num[i];
	}
	sort(nums.begin(),nums.end());
	
	cout<<"after the sorting"<<endl;
	
	for(int i=0;i<n;i++){
		cout<<nums[i]<<" ";
	}
	cout<<endl;//1 2 2 3 3 4 7 8
	
	int i=0;
	bool find =false;
	while(i<n-1){
		if(nums[i]!=nums[i+1] || nums[i]+1!=nums[i+1]){
			int j=nums[i]+1;
			while(j<nums[i+1]){
				find=true;
				cout<<j<<" ";
				j++;
			}
		}
		i++;
	}	
	
	if(find==false){
		cout<< n;
	}
	
	return 0;
	
}