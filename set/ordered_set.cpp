#include<iostream>
#include<set>
#include<unordered_set>


using namespace std;

int main(){
	
	set<int> s;
	
	s.insert(21);
	s.insert(11);
	s.insert(31);
	s.insert(10);
	s.insert(25);
	
	
	for(int ele: s){
		cout<<ele<<" ";
	}
	
	
	return 0;
}