#include<iostream>
using namespace std;

class Node{// user define data type
	public:
		int val;
		Node* next;
		
		Node(int val){
			this->val=val;
			this->next=NULL;
		}
};

class Queue{// user define data structure
	
	public:
		Node* head;
		Node* tail;
		int size;
		
		Queue(){
			head=tail=NULL;
			size=0;
		}
		
		void push(int val){
			Node* temp=new Node(val);
			if(size==0){
				head=tail=temp;
			}else{
				tail->next=temp;
				tail=temp;
			}
			size++;
		}
		
		void pop(){
			if(size==0){
				cout<<"empty queue !!!"<<endl;
				return ;
			}
			Node* temp=head;
			head=head->next;
			delete(temp);
			size--;
		}
		
		
		void Display(){
			Node* temp =head;
			while(temp!=NULL){
				cout<<temp->val<<" ";
				temp=temp->next;
			}
			cout<<endl;
		}
		
		int size_queue(){
			if(size==0){
				cout<<"queue is empty !!!"<<endl;
				return -1;
			}
			return size;
		}
		
		int front(){
			if(size==0){
				cout<<"queue is empty !!!"<<endl;
				return -1;
			}
			return head->val;
		}
		
		int back(){
			if(size==0){
				cout<<"queue is empty !!!"<<endl;
				return -1;
			}
			return tail->val;
		}
		
		void empty(){
			if(size==0){
				cout<<"queue is empty !!!"<<endl;
			}else{
				cout<<"not empty !!!"<<endl;
			}
		}
		
		
};


int main(){
	
	Queue q;
	q.push(10);
	q.Display();
	q.push(20);
	q.Display();
	q.push(30);
	q.Display();
	cout<<"size --> "<<q.size_queue()<<endl;
	cout<<"front --> "<<q.front()<<endl;
	cout<<"back --> "<<q.back()<<endl;
	q.push(40);
	q.Display();
 	q.pop();
 	q.Display();
 	cout<<"size --> "<<q.size_queue()<<endl;
	cout<<"front --> "<<q.front()<<endl;
	cout<<"back --> "<<q.back()<<endl;
	q.empty();
	
	
	return 0;
}