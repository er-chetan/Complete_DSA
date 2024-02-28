#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
int main(){
	vector<int>nums;
	nums.push_back(3);
	nums.push_back(2);
	nums.push_back(3);
 	

	sort(nums.begin(),nums.end());
	
        int n=nums.size();
        int i=0,count=1;
        vector<int>v;

        if(n==1){
         cout<<nums[0];
        }
        while(i<n-1){
            if(nums[i]!=nums[i+1]){
                count=1;
            }else{
                count++;
                if(count>n/3){
                    v.push_back(nums[i]);
                }
            }
			i++;  
        }

for(int i=0;i<v.size();i++){
	cout<<v[i];
}

	 
}