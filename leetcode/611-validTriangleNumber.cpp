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
	sort(nums.rbegin(),nums.rend());
	cout<<"after sorting"<<endl;
	for(int i=0;i<n;i++){
		cout<<nums[i]<<" ";
	}
	cout<<endl;
	
	  int count = 0;
        for(int i = 0; i < n; i++){
            int lo = i + 1;
            int hi = n - 1;
            while(lo < hi){
                if(nums[i]<nums[lo]+nums[hi]){
                    count=count+hi-lo;
                    lo++;
                }
                else{
                    hi--;
                }
            }
        }
	
	cout<<"count"<<" "<<count;
	return 0;
}




///////////------------ TLE -----------/////////////

//while(find==false){
//		if(nums[i]+nums[j]>nums[k]){
//			cout<<nums[i]<<" "<<nums[j]<<" "<<nums[k]<<endl;
//		}
//		if(i==n-3){
//			find=true;
//		}
//		j++;
//		
//		if(k-2==i){
//			i++;
//			k=n-1;
//			j=i+1;
//		}
//		
//		if(j==k){
//			j=i+1;
//			k--;
//		}
//	}