#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
	
	stack<int> st;
 
	st.push(10);.
	
	st.push(20);
	st.push(30);
	st.push(40);
	st.push(50);
	
	stack<int> gt;
	int n=st.size();
	int arr[n];
	int i=0;
	while(st.size()>0){
		arr[i]=st.top();
		st.pop();
		i++;
	}
	
	cout<<"print an array -> ";
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	
	// push the elements of array in stack
	i=0;
	while(i<n){
		st.push(arr[i]);
		i++;
	}
	
	cout<<endl;
	cout<<"again print the stack but in reverse order"<<endl;
	
	while(st.size()>0){
		
		cout<<st.top()<<" ";
		st.pop();
	}

	return 0;
}