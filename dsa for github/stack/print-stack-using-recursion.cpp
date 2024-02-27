#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void DisplayTopToBottom(stack<int> &st){//// display the element top to bottom 
	if(st.size()==0){
		return;
	}
	int x=st.top();
	cout<<x<<" ";
	st.pop();
	DisplayTopToBottom(st);
	st.push(x);
}

void DisplayBottomToTop(stack<int> &st){//// display the element bottom to top
	if(st.size()==0){
		return;
	}
	int x=st.top();
	st.pop();
	DisplayBottomToTop(st);
	cout<<x<<" ";
	st.push(x);
	
}
void PushAtBottomRec(stack<int> &st,int val){///push at bottom recursevely 
	if(st.size()==0){
		st.push(val);
		return;
	}
	int x=st.top();
	st.pop();
	PushAtBottomRec(st,val);
	st.push(x);
}

void ReverseStack(stack<int> &st){//// reverse the stack 
	if(st.size()==1){
		return;
	}
	int x=st.top();
	st.pop();
	ReverseStack(st);
	PushAtBottomRec(st,x);
}

int main(){
	
	stack<int> st;
 
	st.push(10);
	st.push(20);
	st.push(30);
	st.push(40);
	st.push(50);
	cout<<"display top to bottom -> ";
	DisplayTopToBottom(st);
	cout<<endl;
	cout<<"display bottom to top -> ";
	DisplayBottomToTop(st);
	PushAtBottomRec(st,90);
	cout<<endl;
	cout<<"after add the element at bottom -> ";
	DisplayTopToBottom(st);
	cout<<endl;
	ReverseStack(st);
	cout<<"now reverse the whole stack -> ";
	DisplayTopToBottom(st);
	return 0;
}