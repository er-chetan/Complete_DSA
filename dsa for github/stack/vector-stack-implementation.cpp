#include<iostream>
#include<vector>
using namespace std;

class Stack{
	public:
	vector<int> v;
	
	void push(int val){
		v.push_back(val);
	}
	
	void pop(){
		if(v.size()==0){
			cout<<"Stack is empty"<<endl;
			return;
		}
		v.pop_back();
	}
	
	int top(){
		
		if(v.size()==0){
			cout<<"Stack is empty no top element"<<endl;
			return -1;
		}
		
		return v[v.size()-1];
	}
	
	int size(){
		return v.size();
	}
	
	void DisplayStack(){
		for(int i=0;i<v.size();i++){
			cout<<v[i]<<" ";
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
	st.DisplayStack();
	st.pop();
	st.pop();
	st.pop();
	cout<<st.top();
	
	
	return 0;
}