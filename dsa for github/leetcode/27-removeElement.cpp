#include<iostream>
using namespace std;

int main(){
    int removeElement(vector<int>& nums, int val) {
        int index = 0;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] != val){
                nums[index] = nums[i];
                index++;
            }
        }


	
	cout<<"print---->"<<" "<<count<<endl;
	
	
	for(int i=0;i<5;i++){
		cout<<nums[i]<<" ";
	}
	
	
	
	 
}