#include<iostream>
#include<vector>
using namespace std;

//// -------------- recursive solution with dp ------------- ////

vector<int> dp;

int f(int n){
	if(n==0 || n==1){
		return n;
	}
	if(dp[n]!=-1) return dp[n];
	return dp[n]=f(n-1)+f(n-2);
}

//// ------------  iterative solution with dp   -------------- ////

vector<int> dp1;

void iterFibo(int n){
	dp1.clear();
	dp1.resize(n+1,-1);
	dp1[0]=0;
	dp1[1]=1;
	for(int i=2;i<n;i++){
		dp1[i]=dp1[i-1]+dp1[i-2];
	}
	cout<<"iterative function = "<<dp[n];
}


int main(){
	int n;
	cout<<"enter the number"<<endl;
	cin>>n;
	dp.clear();
	dp.resize(n+1,-1);
	cout<<"ans = "<<f(n)<<endl;
	iterFibo(n);
	return 0;
}