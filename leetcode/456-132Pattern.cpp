#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 	
int main(){
	int n;
	cout<<"enter the size of vector"<<endl;
	cin>>n;
	vector<int> nums(n,0);
	cout<<"enter the element in array"<<endl;
	 
	for(int i=0;i<n;i++){
		int ele;
		cin>>ele;
		nums[i]=ele;
	}
	
	for(int i=0;i<n-1;i++){
		int k=i+1;
		int j=n-1;
		while(k<=n-1){
			if(nums[i]<nums[j] && nums[k]>nums[j] && nums[k]>nums[i]){
				cout<<"i --> "<<nums[i]<<" "<<i<<" "<<" "<<j<<" "<<"k -->"<<nums[k]<<" "<<k<<" "<<"j -->"<<nums[j]<<endl;
					j--;
				if(k==n-1){
					break;
				}
				if(j==k){
					k++;
					j=n-1;
				}
			}else if(nums[k]<nums[j] && nums[k]<nums[i]){
				j--;
			}else{
				k++;
			}
		
		}
	}
	
	
	return 0;
}


//-------------------TLE--------------------//

//	for(int i=0;i<n;i++){
//		int j=i+1;
//		while(j<n){
//			int k=j+1;
//			while(k>n){
//				if(nums[i]<nums[j] && nums[j]>nums[k] && nums[k]>nums[i]){
//					cout<<"i --> "<<nums[i]<<" "<<i<<" "<<"j -->"<<nums[j]<<" "<<j<<" "<<"k -->"<<nums[k]<<" "<<k<<endl;
//				}
//				k++;
//			}
//			j++;
//		}
//	}


//-----------------------error--------------//
////minimum
//	int ind;
//	int mini=INT_MAX;
//	for(int i=0;i<n;i++){
//		if(mini>nums[i]){
//			mini=nums[i];
//			ind=i;
//		}
//	}
//	
//	cout<<"minimum number "<<" "<<mini<<endl;
//	
//	 
//	//max element
//	int maximumMax=INT_MIN;
//	int ind1;
//	for(int i=ind+1;i<n;i++){
//		if(maximumMax<nums[i]){
//			maximumMax=nums[i];
//			ind1=i;
//		}	
//	}
//
//	cout<<"maximum number "<<" "<<maximumMax<<" "<<"index"<<": "<<ind<<endl;	
//	
//	// second largest
//	int seclargest=INT_MIN;
//	for(int i=ind1+1;i<n;i++){
//		if(seclargest<nums[i]){
//			seclargest=nums[i];
//		}	
//	}
//	 
//	cout<<"second maximum number "<<" "<<seclargest<<endl; 
//	
//	if(mini<seclargest && mini<maximumMax && maximumMax>seclargest){
//		cout<<"true";
//	}