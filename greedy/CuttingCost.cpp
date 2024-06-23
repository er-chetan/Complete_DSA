#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long int
using namespace std;

bool cmp(int a,int b){
	return a>b;
}

ll MaxCuttingCost(int n,int m,vector<ll>& vertical,vector<ll>& horizontal){
	sort(vertical.begin(),vertical.end(),cmp);
	sort(horizontal.begin(),horizontal.end(),cmp);
	int hr=1,vr=1,h=0,v=0;
	ll ans=0;
	while(h<n && v<m){
		if(vertical[v]>horizontal[h]){
			ans+=vertical[v]*vr;
			v++;
			hr++;	
		}else{
			ans+=horizontal[h]*hr;
			h++;
			vr++;
		}
		if(h==n){
			while(v<m){
				ans+=vertical[v]*vr;
				v++;
				hr++;
			}
		}
		if(v==m){
			while(v<m){
			ans+=horizontal[h]*hr;
			h++;
			vr++;	
			}
		}
	}
	return ans;
}



int main(){
	
	vector<ll> vertical={2,1,3,1,4};
	vector<ll> horizontal={4,1,2};
	
	cout<<"maximum cutting cost"<<" = "<<MaxCuttingCost(horizontal.size(),vertical.size(),vertical,horizontal);

	return 0;
}