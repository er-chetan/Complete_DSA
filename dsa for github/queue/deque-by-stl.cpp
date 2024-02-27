#include<iostream>
#include<stack>
#include<deque>
using namespace std;
int main(){
	deque<int> dq;
	dq.push_front(12);
	dq.push_front(42);
	dq.push_front(52);
	dq.push_front(22);
	// display 
	while(dq.size()>0){
		cout<<dq.back()<<" ";
		dq.pop_back();
	}
	
	
	
	
	return 0;
}