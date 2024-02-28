#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	
	int n,count=1;
	cout<<"enter the size of vector"<<endl;
	cin>>n;	
	
 
	
	vector<int> nums(n,0);
	cout<<"enter the element in vector"<<endl;
	
	for(int i=0;i<n;i++){
		int ele;
		cin>>ele;
		nums[i]=ele;
	}
	
	for(int i=0;i<n;i++){
		cout<<"i----"<<i<<endl;
            if(i%2==0){
                if(nums[i]%2==0){
                	cout<<"continue even----"<<nums[i]<<endl;
                    continue;
                }else{
                    int j=i+1;
                    while(j<n){
                        if(j%2!=0 &&  nums[j]%2==0){
                        	cout<<"swap even ----"<<nums[i]<<" "<<nums[j]<<endl;
                            swap(nums[i],nums[j]);
                            break;
                        }
                        j++;
                    }
                }
            }else{
                if(nums[i]%2!=0){
                	cout<<"continue odd----"<<nums[i]<<endl;
                    continue;
                }else{
                    int j=i+1;
                    while(j<n){
                        if(j%2==0 && nums[j]%2!=0){
                        	cout<<"swap odd ----"<<nums[i]<<" "<<nums[j]<<endl;
                             swap(nums[i],nums[j]);
                             break;
                        }
                        j++;
                    }
                }
            }
        }
        
        
        for(int i=0;i<n;i++){
        	cout<<nums[i]<<" ";
		}
	
	
	return 0;
	
}