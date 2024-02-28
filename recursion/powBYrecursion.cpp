#include<iostream>
using namespace std;

int pow1(int x,int n){
	if(n==1){
		return x;
	}///here this is not a efficient code TOC=o(n)
	
	return x*pow1(x,n-1);
}




int pow2(int x,int n){
	
	int ans;
	if(n==1){
		return x;
	}
	ans=pow2(x,n/2) ;
	if(n%2==0){//efficeint code TOC-o(log n)
		return ans*ans;
	}else{
		return ans*ans*x;
	}
	
	
}

int pow3(int x,int n){
	
	int ans;
	if(n==1){
		return x;
	}
		ans=pow3(x,n/2) ;///this is give a wrong ans when 3^3 then n/2==1 -> 3/2=1 this is wrong so above method 2 is 
		//have condition of odd and even
		return ans*ans;
	
}

int main(){
	
	int x,k;
	cout<<"enter the number :"<<endl;
	cin>>x;
	cout<<"enter the power"<<endl;
	cin>>k;
	
	
	cout<<" "<<"method 1 :"<<pow1(x,k);
	cout<<" "<<"method 2 :"<<pow2(x,k);
	cout<<" "<<"method 2 :"<<pow3(x,k);
	
	
}