#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
	
	stack<int> st;
	cout<<st.size()<<endl;
	st.push(12);
	st.push(45);
	st.push(72);
	st.push(75);
	cout<<st.size()<<endl;
	st.pop();
	cout<<st.size()<<endl;
	cout<<st.top()<<endl;
	
	
	
	
	
	return 0;
}