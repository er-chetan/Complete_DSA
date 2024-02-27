#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int minidiff(int target,vector<int>& nums1,vector<int>& nums2,int index){

        int n=nums1.size();
        vector<int> copy1(n);
        vector<int> copy2(n);
        for(int i=0;i<n;i++){
            copy1[i]=nums1[i];
        }
		
		for(int i=0;i<n;i++){
            copy2[i]=nums1[i];
        }
		
        sort(copy1.begin(),copy1.end());
	
		int lo=0;
        int hi=n-1;
        int mid;
        bool find=false;
         
        cout<<"initially for  target:"<<target<<" "<<"---lo---- :"<<" "<<lo<<" "<<"---mid---- :"<<" "<<mid<<" "<<"---hi---- :"<<" "<<hi<<endl;
        while(lo<=hi){
            mid=lo+(hi-lo)/2;
            if(copy1[mid]==target){
                find=true;
                break;
            }else if(copy1[mid]>target){
                hi=mid-1;
            }else{
                lo=mid+1;
            }
            cout<<"---lo---- :"<<" "<<lo<<" "<<"---mid---- :"<<" "<<mid<<" "<<"---hi---- :"<<" "<<hi<<endl;
        }

        if(find==true){
            copy2[index]=copy1[mid];          
        }else{
         int diff1,diff2;       	
        	diff1=abs(copy2[hi]-target);
        	diff2=abs(copy2[lo]-target);
        	if(diff1<diff2){
        		copy2[index]=copy1[hi];
			}else{
				copy2[index]=copy1[lo];
			}
        }
                                       
        int sum=0;                                       
        int temp1;
        for(int i=0;i<n;i++){          
            temp1=abs(copy2[i]-nums2[i]);        
                sum=sum+temp1;
        }
         cout<<"sum :"<<" "<<sum<<" "<<endl;
        return sum;
}
 
int minAbsoluteSumDiff(vector<int>& nums1, vector<int>& nums2) {
	int n=nums1.size();
     	int minimum=INT_MAX;
		for(int i=0;i<n;i++){
			int result=minidiff(nums2[i],nums1,nums2,i);
			if(minimum>result){
				minimum=result;
			}
		}
		return minimum;
        
}


int main(){
	
	vector<int> nums1;
	vector<int> nums2;
	
	int n;
	cout<<"enter ther no.of values in both vector(size) :"<<endl;
	cin>>n;
	
	cout<<"enter the value in first array"<<endl;
	for(int i=0;i<n;i++){
		
		int ele;
		cin>>ele;
		nums1.push_back(ele);
		
	}
	
	cout<<"enter the value in first array"<<endl;
	for(int i=0;i<n;i++){
		
		int ele;
		cin>>ele;
		nums2.push_back(ele);
		
	}
	
	int result=minAbsoluteSumDiff(nums1,nums2);
	
	cout<<"minimum absolute differnc between two vector:"<<" "<<result;
	
	return 0;
}