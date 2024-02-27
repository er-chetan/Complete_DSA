#include<iostream>
#include<climits>
using namespace std;
int main(){
	// leet code 34
	int n;
	cout<<"enter the size"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the element in array"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<endl;
	cout<<"enter the target"<<endl;
	int target;
	cin>>target;
	
	cout<<"print an array"<<endl;
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	cout<<endl;
	
	int lo=0;
	int hi=n-1,firstOccur;
	bool find=false;
	while(lo<=hi){
		int mid=lo+(hi-lo)/2;
		
		if(arr[mid]==target){
			if(arr[mid-1]==target){
				hi=mid-1;
			}else{
				firstOccur=mid;
				break;
			}
		}else if(arr[mid]<target){
			lo=mid+1;
	   	}else{
			hi=mid-1;
		}
	}
	 
	
	
	lo=0;
	hi=n-1;
	int lastOccur;
	while(lo<=hi){
		int mid=lo+(hi-lo)/2;
		
		if(arr[mid]==target){
			if(arr[mid+1]==target){
				lo=mid+1;
			}else{
				lastOccur=mid;
				break;
			}
		}else if(arr[mid]<target){
			lo=mid+1;
	   	}else{
			hi=mid-1;
		}
	}
	 
	cout<<"first Occurence"<<" "<<firstOccur<<" "<<"last Occurence"<<" "<<lastOccur;
	
	return 0;
}


//for second modify way to solve this becoz on leetcode there was some problem on mid+1 wen nums vector
//have only one value which is not equal to the target

//class Solution {
//public:
//    vector<int> searchRange(vector<int>& nums, int target) {
//        int n=nums.size();    
//        int lo=0,hi=n-1;
//        bool find=false;
//
//        vector<int>v;
//        v.push_back(-1);
//        v.push_back(-1);
// 
//        while(lo<=hi){
//        int mid=lo+(hi-lo)/2;
//                if(nums[mid]==target){
//                        v[0]=mid;
//                        hi=mid-1;
//                }else if(nums[mid]<target){
//                    lo=mid+1;
//                }else{
//                    hi=mid-1;
//                }
//            }
//
//        lo=0,hi=n-1;
//            while(lo<=hi){
//                int mid=lo+(hi-lo)/2;
//                if(nums[mid]==target){
//                        v[1]=mid;
//                        lo=mid+1;
//                }else if(nums[mid]<target){
//                    lo=mid+1;
//                }else{
//                    hi=mid-1;
//                }
//            }
//
//        return v;
//
//    }
//};