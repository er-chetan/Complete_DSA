#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
	unordered_set<int> us;
	us.insert(1);
	us.insert(5);
	us.insert(5);
	us.insert(4);
	us.insert(5);
//	us.erase(4);
	cout<<"size"<<us.size()<<endl;
	int target=33;
	
	if(us.find(target)!=us.end()){
		cout<<"exists"<<endl;
	}else{
		cout<<"does not exists"<<endl;
	}
	
	
	for(int ele : us){
		cout<<ele<<" ";
	}
	
}