#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cout<<"enter the size of the vector"<<endl;
	cin>>n;
	
	vector<int> height(n,0);
	cout<<"enter the element in vector"<<endl;
	
	for(int i=0;i<n;i++){
		int ele;
		cin>>ele;
		height[i]=ele;
	}
	
	int i=0;
	int j=n-1;
	int diff=-1,maxwater=INT_MIN,water;
	while(i<j){
		diff=j-i;
		if(height[i]<height[j]){
			water=height[i]*diff;
			i++;
		}else{
			water=height[j]*diff;
			j--;
		}
		
		if(maxwater<water){
			maxwater=water;
		}
		
	}
	
	cout<<"maximum water"<<" "<<maxwater;
	
	
	return 0;
}