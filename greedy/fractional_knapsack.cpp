#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(pair<int,int>& p,pair<int,int>& q){
	double r1=(p.first*1.0)/(p.second*1.0);
	double r2=(q.first*1.0)/(q.second*1.0);
	return r1>r2;
}

double fractioncal_knapsack(vector<int>& value,vector<int>& weight,int n,int w){
	vector<pair<int,int>> v;
	for(int i=0;i<n;i++){
		v.push_back({value[i],weight[i]});
	}
	sort(v.begin(),v.end(),cmp);
	// print sort pair vector according to the cmp function
	cout<<"print sorted pair vector according to the cmp function"<<endl;
	for(auto ele : v){
		cout<<ele.first<<" ";
	}
	double profit=0;
	for(int i=0;i<n && w!=0;i++){
		if(v[i].second<=w){
			profit+=v[i].first;
			w-=v[i].second;
		}else{
			profit+=((v[i].first*1.0)/(v[i].second*1.0))*w;
			w=0;
		}
		cout<<"yes"<<endl;
	}
	cout<<endl;
	return profit;
}

int main(){
	vector<int> value={500,200,300,100};
	vector<int> weight={9,3,3,4};
	double result =fractioncal_knapsack(value,weight,value.size(),6);
	cout<<"maximum profit = "<<result;	
	return 0;
}