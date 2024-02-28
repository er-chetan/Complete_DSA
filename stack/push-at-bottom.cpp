#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void PushAtBottom(stack<int> &st, int val){
	stack<int> helper;
	
	while(st.size()>0){
		helper.push(st.top());
		st.pop();
	}
	
	st.push(val);
	
	while(helper.size()>0){
		st.push(helper.top());
		helper.pop();
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

void PrintStackBottomToTop(stack<int> st){
	cout<<"print the stack bottom to top -> ";
	
	stack<int> temp;
	
	while(st.size()>0){
		temp.push(st.top());
		st.pop();
	}
	
	while(temp.size()>0){
		cout<<temp.top()<<" ";
		temp.pop();
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
	PrintStackBottomToTop(st);
	cout<<endl;
	cout<<"after insert the element in bottom"<<endl;
	PushAtBottom(st,70);
	cout<<endl;
	PrintStackTopToBottom(st);
	PrintStackBottomToTop(st);

	return 0;
}