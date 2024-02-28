#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	
	int n,count=1;
	cout<<"enter the size of vector"<<endl;
	cin>>n;	
	
 
	vector<int> nums(n,0);
	cout<<"enter the element in vector"<<endl;
	
	for(int i=0;i<n;i++){
		int ele;
		cin>>ele;
		nums[i]=ele;
	}
	
	sort(nums.begin(),nums.end());
	
	int idx=-1;
	for(int i=0;i<n;i++){
		if(nums[i]!=i){
			idx=i;
			break;
		}
	}
	
	
//	if(idx==-1){
//         return nums[n-1]+1;  if array is 0 1 2 then missing is 3
//    }else{
//        return idx;
//   }


	cout<<"missing number"<<" "<<idx<<endl;

// by binary search

	int lo=0;
	int hi=n-1;
	
	while(lo<=hi){
		int mid=lo+(hi-lo)/2;
		if(nums[mid]==mid){
			lo=mid+1;
		}else if(nums[mid]>mid){
			hi=mid-1;
		}
	}
	
	cout<<lo;


	
	
	return 0;
}