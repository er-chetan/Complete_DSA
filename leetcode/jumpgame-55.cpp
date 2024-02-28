#include<iostream>
#include<vector>
using namespace std;


//Explain Question- if maximum element store in prevoius index then further index + element is must greator then 
//previous maximum value then jumhas store the new value and compare with last value//

//EX-1
//Input: nums = [2,3,1,1,4]
//Output: true
//
//EX-2
//Input: nums = [3,2,1,0,4]
//Output: false
//
//EX-3
//Input: nums = [3,2,1,1,4]
//Output: TRUE  IMPORTANT EXAMPLE TO UNDERSTAND THE QUESTION


bool canJump(vector<int>& nums) {
    int n=nums.size();
    int i=1;
    int jump;
    while(i<n-1){
    	
    	if(jump<i+nums[i]){
            jump=i+nums[i];
        }

        if(jump>=n-1){
            return true;
        }  
        i++;
            
		if(jump<i){
        	return false;
        }
		
	}
	return false;
}

int main(){
	vector<int> v;
	int n;
	cout<<"enter the size of an element"<<endl;
	cin>>n;
	cout<<"enetr the element in array"<<endl;
	
	for(int i=0;i<n;i++){
		int ele;
		cin>>ele;
		v.push_back(ele);
	}
	
	if(canJump(v)){
		cout<<"true";
	}else{
		cout<<"false";
	}
	
	return 0;
}




