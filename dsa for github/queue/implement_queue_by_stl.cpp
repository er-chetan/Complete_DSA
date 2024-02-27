#include<iostream>
#include<queue>
using namespace std;

int main(){
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	
	cout<<"front element -->"<<q.front()<<endl;
	cout<<"back element -->"<<q.back()<<endl;
	cout<<"size --> "<<q.size()<<endl;
	q.pop();
	cout<<"front element -->"<<q.front()<<endl;
	cout<<"back element -->"<<q.back()<<endl;
	cout<<"size --> "<<q.size();
	
	return 0;
}