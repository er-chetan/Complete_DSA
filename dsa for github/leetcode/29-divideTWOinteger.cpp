#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int dividend=6;
	int divisor=4;
	long long qoutient=0;
	
	if(divisor>0 && dividend>0){ // 6,3
		for(int i=1;i<=INT_MAX;i++){
			dividend=dividend-divisor;
			if(dividend>=0){
				qoutient++;
			}else{
				break;
			}
			cout<<qoutient;
		}
		
	}else if(divisor<0 && dividend>0){ //6,-3
		divisor=-(divisor);
		for(int i=1;i<=dividend;i++){
			dividend=dividend-divisor;
			if(dividend>=0){
				qoutient++;
			}else{
				break;
			}
		}
		cout<<-qoutient;
	}else if(divisor>0 && dividend<0){//-6,3
		dividend=-(dividend);
		for(int i=1;i<=dividend;i++){
			dividend=dividend-divisor;
			if(dividend>=0){
				qoutient++;
			}else{
				break;
			}
		}
		cout<<-qoutient;
	}else if(divisor<0 && dividend<0){
		divisor=-(divisor);
		dividend=-(dividend);
		for(int i=1;i<=dividend;i++){
				dividend=dividend-divisor;
				if(dividend>=0){
					qoutient++;
				}else{
					break;
				}
			}
			cout<<qoutient;
	}
	
	
	
	
	return 0;
}