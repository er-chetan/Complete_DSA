#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void PushAtIndex(stack<int> &st, int val,int idx){
	stack<int> temp;//or helper
	
	while(st.size()>idx){
		temp.push(st.top());
		st.pop();
	}
	
	st.push(val);
	
	while(temp.size()>0){
		st.push(temp.top());
		temp.pop();
	}
}

void PrintStackTopToBottom(stack<int> st){
	cout<<"print the stack top to bottom -> ";
	
	while(st.size()>0){
		cout<<st.top()<<" ";
		st.pop();
	}
	cout<<endl;
}

 
int main(){
	
	stack<int> st;
 
	st.push(10);
	st.push(20);
	st.push(30);
	st.push(40);
	st.push(50);
	PrintStackTopToBottom(st);
	PushAtIndex(st,90,2);
	PrintStackTopToBottom(st);
	 

	return 0;
}