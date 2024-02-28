#include<iostream>
using namespace std;

class Stack{
	public: 
	
	int arr[5];
	int idx;
	
	Stack(){	
		idx=-1;
	}
	void push(int val){
		if(idx==sizeof(arr)/sizeof(arr[0])-1){
			cout<<"Stack is full"<<endl;
			return ;
		}
		idx++;
		arr[idx]=val;
	}
	void pop(){
		if(idx==-1){
			cout<<"Stack is empty"<<endl;
			return;
		}
		idx--;
	}
	
	int top(){
		if (idx<0){
			cout<<"there is no element stack is empty now";
			return -1;
		}
		return arr[idx];
	}
	
	int size(){
		return idx+1;
	}
	
	void DisplayStack(){
		for(int i=0;i<size();i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	
};

int main(){
	Stack st;
	st.push(10);
	st.push(20);
	st.push(30);
	st.DisplayStack();
	st.pop();
	cout<<"after pop -> ";
	st.DisplayStack();
	cout<<"top element in stack -> "<<st.top()<<endl;
	st.pop();
	st.pop();
	st.pop();//  stack is empty
	cout<<st.top();// return -1
	
	
	return 0;
}