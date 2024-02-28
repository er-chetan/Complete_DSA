#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main(){
	
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);
	
	
	cout<<"previous element ---->>>"<<endl;
	int i=0;
	while(i<q.size()){
		int x=q.front();
		cout<<x<<" ";
		q.pop();
		q.push(x);
		i++;
	}
	
	
	cout<<endl;
	stack<int> st;
	int k=3;
	for(int i=0;i<k;i++){
		int x=q.front();
		q.pop();
		st.push(x);
	}
	
	cout<<"remaining elements --->> "<<endl;
	
	i=0;
	while(i<q.size()){
		int x=q.front();
		cout<<x<<" ";
		q.pop();
		q.push(x);
		i++;
	}
	
	while(st.size()>0){
		int x=st.top();
		q.push(x);
		st.pop();
	}
	
	cout<<endl;
	cout<<"updated queue"<<endl;
	i=0;
	
	while(i<q.size()-k){
		int x=q.front();
		q.pop();
		q.push(x);
		i++;
	}
	
	i=0;
	while(i<q.size()){
		int x=q.front();
		cout<<x<<" ";
		q.pop();
		q.push(x);
		i++;
	}
	
	
	 
	
	
	return 0;
}