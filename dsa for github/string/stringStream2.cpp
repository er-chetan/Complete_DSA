#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
//	string str="0123 0023 456 00182 940 2901";
//	
//	stringstream s(str);
//	string temp;
//	vector<int> v;
	
	
//	while(s>>temp){
//		int number=stoi(temp);
//		v.push_back(number);
//	}
//	
////	first method
//	sort(v.begin(),v.end());
//	
//	int n=v.size();
//	cout<<"maximum"<<" "<<v[n-1];


//second method
//	int n=v.size();
//	int max=v[0];
//	for(int i=1;i<n;i++){
//		if(max<v[i]){
//			max=v[i];
//		}
//	}
//	
//	cout<<"maximum"<<" "<<max;



//third method
string st[]={"0123","0023","456","00182","940","002921"};
int max=stoi(st[0]);
string maxs=st[0];

for(int i=0;i<6;i++){
	int x=stoi(st[i]);
	if(x>max){
		max=x;
		maxs=st[i];
	}
}
	
	cout<<"maximum integer"<<" "<<max<<endl;
	cout<<"maximum string"<<" "<<maxs;
	
}



