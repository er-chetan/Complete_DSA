#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
	
	// max heap 
//	cout<<"max heap -->> "<<endl;
//	priority_queue<int> pq;
//	pq.push(10);
//	pq.push(2);
//	pq.push(-6);
//	pq.push(5);	
//	cout<<pq.top()<<endl;
//	pq.pop();
//	cout<<pq.top()<<endl;
	
	
	//	min heap
	cout<<"min heap -->> "<<endl;
	priority_queue<int,vector<int>,greater<int>> Mpq;
	
	Mpq.push(10);
	Mpq.push(2);
	Mpq.push(-6);
	Mpq.push(5);	
	cout<<Mpq.top()<<endl;
	Mpq.pop();
	cout<<Mpq.top();
		
	return 0;
}