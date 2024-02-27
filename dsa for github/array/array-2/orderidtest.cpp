#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> v;
	int n;
	
	cin>>n;
	for(int i=0;i<n;i++){
		int q;
		cin>>q;
		v.push_back(q);
	}
	
	
	
	vector <int> answer;
	for(int i=0;i<v.size();i++){
//		int sum=0;
		while(v[i]>10){
			int temp= v[i]%10;
			sum=sum+temp;
			v[i]=v[i]/10;
			if(v[i]<10){
				sum=sum+v[i];
			}
		}
		answer.push_back(sum);
	}
	
	for(int i=0;i<n;i++){
		cout<<answer[i]<<endl;
	}
	
	return 0;
}


//int n=orderID.size();
//for(int i=0;i<n;i++){
//		while(orderID[i]>0){
//			int temp= v[i]%10;
//			sum=sum+temp;
//			orderID[i]=orderID[i]/10;
//		}
//		
//		answer.push_back(sum);
//	}
	






