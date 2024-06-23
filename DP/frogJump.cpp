#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//// -------------- recursive solution with dp ------------- ////

vector<int> dp(100005,-1);
int k;
vector<int> h={10,30,40,50,20};

int f(int i){
	if(i>=h.size()){
		return INT_MAX;
	}
	if(i==h.size()-1){
		
		return 0;
	}
	if(dp[i]!=-1){
		return dp[i];
	}
	int ans=INT_MAX;
	for(int j=1;j<=k;j++){
		if(i+j >= h.size()) break;
		ans=min(ans,abs(h[i]-h[i+j])+f(i+j));
	}
	cout<<"dp[i]"<<" "<<i<<" "<<ans<<endl;
	
	return dp[i]=ans;
}

//// ------------  iterative solution with dp   -------------- ////

void fIter(){
	vector<int> dp1(100005,INT_MAX);
	int n=h.size();
	dp1[n-1]=0;
	for(int i=n-2;i>=0;i--){
		for(int j=1;j<=k;j++){
			if(i+j >= n) break;
			dp1[i]=min(dp1[i],abs(h[i]-h[i+j])+dp1[i+j]);
		}
		cout<<"dp1[i]"<<" "<<i<<" "<<dp1[i]<<endl;
	}3
	cout<<"\nans = "<<dp1[0];
}


int main(){
//	dp.clear();
	dp.resize(h.size(),-1);
	cin>>k;
	cout<<"top to bottom"<<endl;
	int res=f(0);
	cout<<"ans = "<<res<<endl;
	cout<<"bottom to top"<<endl;
	fIter();
	return 0;
}