#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cout<<"enter even size"<<endl;
	cin>>n;
	vector<int> nums;
	
	cout<<"enter the even element in vector"<<endl;
	
	for(int i=0;i<n;i++){
		int ele;
		cin>>ele;
		nums.push_back(ele);
	}
	
	
	////------ start------//////
	
	
        int i=0,j=nums.size()-1;

        vector<float> v;
        sort(nums.begin(),nums.end());
        while(i<j){
            float avg=float(nums[i]+nums[j])/2;
            cout<<"avg---"<<avg<<endl;
            v.push_back(avg);
            i++;
            j--;
        }

        sort(v.begin(),v.end());
        
        cout<<"sort avg"<<endl;
	    for(int i=0;i<v.size();i++){
			
			cout<<v[i]<<" ";
		}
	
	
	int k=0;
	int count=1;
	
	while(k<v.size()-1){
		if(v[k]==v[k+1]){
			k++;
			continue;
		}else{
			count++;
		}
		k++;
	}
	
	cout<<"avrg distinct"<<count;
	
	return 0;
	
}