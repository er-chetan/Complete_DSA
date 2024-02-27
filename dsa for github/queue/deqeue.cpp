#include<iostream>
using namespace std;

class Node{// user define data type
	public:
		int val;
		Node* next;
		Node* prev;
		
		Node(int val){
			this->val=val;
			this->next=NULL;
			this->prev=NULL;
		}
};

class Deque{
	
	public : 
	
	Node* head;
	Node* tail;
	int size;
	
	Deque(){
		head=NULL;
		tail=NULL;
		size=0;
	}
	
	void push_back(int val){
		Node* temp=new Node(val);
			if(size==0){
				head=tail=temp;
			}else{
				tail->next=temp;
				temp->prev=tail;
				tail=temp;
			}
			size++;
	}
	
	void push_front(int val){
		Node* temp=new Node(val);
			if(size==0){
				head=tail=temp;
			}else{
				temp->next=head;
				head->prev=temp;
				head=temp;
			}
			size++;
	}
	
	void pop_front(){
		head=head->next;
		if(head!=NULL){
			head->prev=NULL;
		}
		if(head==NULL){
			tail==head;
		}
		size--;
	}
	
	void pop_back(){
		tail=tail->prev;
		if(tail!=NULL){
			tail->next=NULL;
		}
		if(tail==NULL){
			head=tail;
		}
		size--;
	}
	
	void display(){
		cout<<"print the list"<<endl;
		Node* temp=head;
		while(temp!=NULL){
			cout<<temp->val<<" ";
			temp=temp->next;
		}
		cout<<endl;
	}
	
	int size_dequeue(){
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
	
	Deque dq;
	dq.push_back(10);
	dq.push_back(20);
	dq.push_back(30);
	dq.display();
	dq.push_front(25);
	dq.push_front(35);
	dq.display();
	cout<<"size of a dequeue ---> "<<dq.size_dequeue()<<endl;
	cout<<"front of a dequeue ---> "<<dq.front()<<endl;
	cout<<"back of a dequeue ---> "<<dq.back()<<endl;
	dq.pop_back();
	dq.pop_front();
	dq.display();
	return 0;
}