#include<iostream>
#include<climits>
using namespace std;
int main(){
	 int n=9;
	int nums[n]={11,11,9,4,3,1,-1,-1,3};
 
        int i=0,count1=1,count2=1,count3=0;
        bool find=true;

        while(i<n){
            

            if(nums[i]<nums[i+1]){
                count1++;
                cout<<"1-->"<<count1<<" "<<"element-->"<<nums[i]<<endl;
            }else if(nums[i]>nums[i+1]){
                count2++;
                cout<<"2-->"<<count2<<" "<<"element-->"<<nums[i]<<endl;
                                
            }else{
                count1++;
                count2++;
                count3++;
                
                cout<<"#####    thrice start    ########"<<endl;
                cout<<"1-->"<<" "<<count1<<" "<<"element-->"<<nums[i]<<endl;
		        cout<<"2-->"<<" "<<count2<<" "<<"element-->"<<nums[i]<<endl;
		        cout<<"3-->"<<" "<<count3<<" "<<"element-->"<<nums[i]<<endl;
		        cout<<"#####    thrice end    ########"<<endl<<endl;
            }
            i++;
            
            if(i==n-1){
                break;
            }
        }
        
        cout<<"1"<<" "<<count1<<endl;
        cout<<"2"<<" "<<count2<<endl;
        cout<<"3"<<" "<<count3<<endl;

        if(count1==n){
            count2=count2-count3;
            cout<<" 2"<<" "<<count2<<endl;
        }else if(count2==n){
            count1=count1-count3;
            cout<<"1"<<" "<<count1<<endl;
        }

        if(count1==n && count2==1){
            cout<<"true";
        }else if(count2==n && count1==1){
            cout<<"true";
        }else{
            cout<<"false";
        }
    return 0;    
}
 