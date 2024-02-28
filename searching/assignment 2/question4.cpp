#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	cout<<"enter the size of an array :"<<endl;
	int n,ele;
	cin>>n;
	vector<int> v;
	cout<<"enter the element in array :"<<endl;
	
	for(int i=0;i<n;i++){
		cin>>ele;
		v.push_back(ele);
	}
	
	cout<<"enter the target :"<<endl;
	int target;
	cin>>target;
//	[0,1,2,4,4,4,5,6,6,7] ----->  [4,5,6,6,7,0,1,2,4,4]	

int lo=0;
int hi=n-1;
bool find=false;
while(lo<=hi){
	int mid=lo+(hi-lo)/2;
	
	if(v[mid]==target){
		find=true;
		break;
	}else if(v[lo]==v[mid] && v[mid]==v[hi]){
		lo++;
		hi--;
	}else if(v[lo] <= v[mid]){
		if(v[lo] <= target && target <= v[mid]){
			hi = mid - 1;
		}else{
			lo = mid + 1;
		} 
	}else {
		if(v[mid] <= target && target <= v[hi]){
			lo = mid + 1;
		}else{
			hi = mid - 1;
		} 
	}
}
	if(find==true){
		cout<<"true";
	}else{
		cout<<"false";
	}
	
	return 0;
	
}
