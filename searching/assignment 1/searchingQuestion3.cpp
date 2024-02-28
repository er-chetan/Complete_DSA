//Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the
//maximum number of 1’s.
//Input matrix : 0 1 1 1
//0 0 1 1
//1 1 1 1 // this row has maximum 1s
//0 0 0 0
//Output: 2

#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
	int n,m,target;
	
	cout<<"enter the row of an array"<<endl;
	cin>>n;
	cout<<"enter the column in array"<<endl;
	cin>>m;
	int arr[n][m];
	
	cout<<"enter the element in array"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		 	cin>>arr[i][j];
		}
	}
	
	
	cout<<"enter the targeted value"<<endl;
	cin>>target;
	
	int lo,find=-1;
	int hi,first,index;
	bool found;
	int i=0;
	while(i<n){
		lo=0;
		hi=m-1;
		
		while(lo<=hi){
			found=false;
			int mid=lo+(hi-lo)/2;	
			
			if(arr[i][mid]==target){
			 	if(mid==0){
			 		found=true;
				 	first=mid;
					break;
			 	}else if(arr[i][mid-1]==target){
			 		hi=mid-1;
				}else{ 
					found=true;
					first=mid;
					break;    					
				}
			}else if(arr[i][mid]<target){
				lo=mid+1;
			}else{
			 hi=mid-1;
				
			}
		}
		
		int element;
		if(found==true){
			element=m-first;
			cout<<i<<"----"<<element<<endl;
		}else{
			element=0;
			cout<<i<<"----"<<element<<endl;
		}
		
			if(find<element){  
				index=i;
				find=element;
			}
		i++;
	}
	
	cout<<"max row of 1's is:"<<" "<<index<<" "<<"no. of 1 is: "<<" "<<find;
	return 0;	
}
	  
                         