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
	
	//// print in reverse order but the stack is empty so it si worst method  ///
	
//	while(st.size()>0){
//		cout<<st.top()<<" ";
//		st.pop();
//	}

// print the element with no empty stack using another temporary stack to hold the element

	stack<int> temp;
	
	while(st.size()>0){
		int x=st.top();
		cout<<st.top()<<" ";
		st.pop();
		temp.push(x);
	}
	
	// putting the value again in stack
	
	while(temp.size()>0){
		int x=temp.top();
		temp.pop();
		st.push(x);
	}
	cout<<endl;
	while(st.size()>0){
		cout<<st.top()<<" ";
		st.pop();
	}
	
	
	
	
	return 0;
}