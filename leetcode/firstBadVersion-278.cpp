#include<iostream>
using namespace std;

int  isBadVersion(int n,int bad){
	
	int lo=1;
    int hi=n;
    int index;
//    bool find==false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(mid==bad){
            return mid;
            break;
        }else if(mid<bad){
            lo=mid+1;
        }else{
            hi=mid-1;
		}
    }
    
	return 0;
}
 


int main(){
	int n=5;
	int bad=4;
	int res=isBadVersion(n,bad);
	cout<<"-------"<<res<<"--------";
	return 0;
}