#include<iostream>
using namespace std;
class Node{
	public: 
		int val;
		Node* next;
	
	Node(int val){
		this->val=val;
		this->next=NULL;
	}
};

class Stack{
	public:
		
	Node* head;
	int size;
	
	Stack(){
		head=NULL;
		size=0;
	}
	
	void push(int val){
		Node* temp=new Node(val);
		temp->next=head;
		head=temp;
		size++;		
	}
	
	void pop(){
		if(head==NULL){
			cout<<"stack is empty"<<endl;
		}
		head=head->next;
	}
	
	int top(){
		if(head==NULL){
			cout<<"stack is empty"<<endl;
			return -1;
		}
		return head->val;
	}
	
	void DisplayStackTopToBottom(){
		Node* temp=head;
		while(temp!=NULL){
			cout<<temp->val<<" ";
			temp=temp->next;
		}
		cout<<endl;
	}
	
	void print(Node* temp){
		if(temp==NULL){
			return;
		}
		print(temp->next);
		cout<<temp->val<<" ";
	}
	
	void DisplayStackBottomToTop(){
		Node* temp=head;
		print(temp);
		cout<<endl;
	}
};


int main(){
	
	Stack st;
	
	st.push(10);
	st.push(20);
	st.push(30);
	st.push(40);
	st.push(50);
	cout<<"reverse order stack linked list -> ";
	st.DisplayStackTopToBottom();
	cout<<"normal stack linked list -> ";
	st.DisplayStackBottomToTop();
	cout<<"size of the stack -> "<<st.size<<endl;
	cout<<"top element -> "<<st.top()<<endl;
	cout<<"after pop the elements"<<endl;
	st.pop();
	st.pop();
	cout<<"normal stack linked list -> ";
	st.DisplayStackBottomToTop();
	
	
	
	return 0;
}