#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int largeProductNegative(vector<int> arr){
	int cz=0,cp=0,cn=0;
	int product_neg=1,product_pos=1;
	for(int i=0;i<arr.size();i++){
		if(arr[i]==0){
			cz++;
		}else if(arr[i]>0){
			product_pos*=arr[i];
			cp++;
		}else{
			cn++;
			product_neg*=arr[i];
		}
	}
	
	if(cn==0){ /// no negative number
		if(cz>0){
			return 0;
		}else{
			int mini=INT_MAX;
			for(int i=0;i<arr.size();i++){
				if(mini>arr[i]){
					mini=arr[i];
				}
			}
			return mini;
		}
	}else{
		if(cn%2==0){
			int maxi=INT_MIN;
			for(int i=0;i<arr.size();i++){
				if(arr[i]==0){
					continue;
				}
				if(maxi<arr[i] && arr[i]<0){ // largest negative
					maxi=arr[i];
				}
			}
			
			product_neg=product_neg/maxi;
			return product_neg*product_pos;
		}
		
		return product_neg*product_pos;

	}
}

int main(){
	
	vector<int> v={0,-2,3,4,3};
	cout<<"largest negative product = "<<largeProductNegative(v);
	
	
	
	return 0;
}