#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
	
	
	unordered_map<string,int> m;
	
	/// first way //
//	pair<string,int> p1;
//	p1.first="chetan";
//	p1.second=2;
//	cout<<p1.first<<" "<<p1.second<<endl;
//	pair<string,int> p2;
//	p2.first="piyush";
//	p2.second=4;
//	cout<<p2.first<<" "<<p2.second<<endl;
//	pair<string,int> p3;
//	p3.first="hitesh";
//	p3.second=6;
//	cout<<p3.first<<" "<<p3.second<<endl;
	
//	m.insert(p1);
//	m.insert(p2);
//	m.insert(p3);


/// second way

	m["chetan"]=65;
	m["harsh"]=55;
	m["piyush"]=25;
	m["ajay"]=45;
	
	for(auto p:m){
		cout<<p.first<<" ";
	}
	m.erase("ajay");
	cout<<endl;
	for(auto p:m){
		cout<<p.first<<" ";
	}
	
	cout<<"size -> "<<m.size();
	
	
	return 0;
}