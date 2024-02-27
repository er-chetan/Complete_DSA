#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	
	int n,count=1;
	cout<<"enter the size of vector"<<endl;
	cin>>n;	
	
 
	
	vector<int> a(n,0);
	cout<<"enter the element in vector"<<endl;
	
	for(int i=0;i<n;i++){
		int ele;
		cin>>ele;
		a[i]=ele;
	}										// 4,1,3,1,3,3,1,2,3,2,4,2,1,4,4,4,4,4
											// 1 1 1 1 2 2 2 3 3 3 3 4 4 4 4 4 4 4 -- sorted
											
	if(n==1){
		return a[0];
	}									
	vector<int> ans;
	sort(a.begin(),a.end());
	
	int i=0;
	while(i<n-1){
		if(a[i]==a[i+1]){
			count++;
			if(count>n/3 && i+1==n-1){
				ans.push_back(a[i]);
			}
		}else{	 									
			if(count>n/3){
				ans.push_back(a[i]);
				if(i+1==n-1){ 	
					count=1;
					if(count>n/3){
						ans.push_back(a[i+1]);
					}			  
				} 	
			}
			count=1;	
		}
		i++;
	}
	
	
	cout<<"print majority element"<<endl;
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
	
	return 0;
}