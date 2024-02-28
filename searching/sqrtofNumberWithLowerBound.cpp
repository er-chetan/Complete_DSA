#include<iostream>
#include<climits>
using namespace std;
int main(){
	
	int n,target;
	cout<<"enter the size"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the element in array"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"enter the target"<<endl;
	cin>>target;
	
	int lo=0,hi=n-1,ans;
	bool find=false;
	
	while(lo<=hi){
		int mid=lo+(hi-lo)/2;
		
		if(mid*mid==target){
			ans=mid;
			find=true;
			break;
		}else if(mid*mid<target){
			lo=mid+1;
		}else{
			hi=mid-1;
		}
		
	}
	
	if(find==true){
		cout<<"square root is possible"<<" "<<ans;
	}else{
		cout<<"square root is not possible"<<" "<<hi;
	}
	
	 
	return 0;
		
}
	
	