#include<iostream>
#include<unordered_map>
#include<map>

using namespace std;

int main(){
	
	map<int,int> map;
	map[60]=2;
	map[20]=1;
	map[30]=3;
	
	
	
	for(auto ele: map){
		cout<<ele.second<<endl;
	}
	
	
	return 0;
}