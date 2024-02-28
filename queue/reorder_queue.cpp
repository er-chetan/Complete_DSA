////////////////   reorder queue //////////////// by using one stack only  /////////
#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main(){
	queue<int> q;
	stack<int> st;
	int n=11;
	
	for(int i=1;i<n;i++){
		cout<<i<<" ";
	}
	
	for(int i=1;i<n;i++){
		q.push(i);
	}
	
	
	for(int i=1;i<n;i++){
		st.push(q.front());
		q.pop();
	}
	
	
	/// for reversing he last half queue
	
	for(int i=1;i<=n/2;i++){
		q.push(st.top());
		st.pop();
	}
	
	while(st.size()>0){
		q.push(q.front());
		q.pop();
		q.push(st.top());
		st.pop();
	}
	
	
	//// reverse full queue printing
	
	while(q.size()>0){
		st.push(q.front());
		q.pop();
	}
	
	while(st.size()>0){
		q.push(st.top());
		st.pop();
	}
	
	cout<<"\nafter making an order"<<endl;
	while(q.size()>0){
		cout<<q.front()<<" ";
		q.pop();
	}
	
	
}