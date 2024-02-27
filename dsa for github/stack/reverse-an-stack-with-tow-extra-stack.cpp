#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
	
	stack<int> st;
 
	st.push(10);
	st.push(20);
	st.push(30);
	st.push(40);
	st.push(50);
	
	stack<int> gt;
	
	while(st.size()>0){
		gt.push(st.top());
		cout<<st.top()<<" ";
		st.pop();
	}
	
	stack<int> rt;
	
	while(gt.size()>0){
		rt.push(gt.top());
		gt.pop();
	}
	
	while(rt.size()>0){
		st.push(rt.top());
		rt.pop();
	}
	
	cout<<"\nreverse by same stack -> ";
	
	while(st.size()>0){
		cout<<st.top()<<" ";
		st.pop();
	}
	
	
	
	
	return 0;
}