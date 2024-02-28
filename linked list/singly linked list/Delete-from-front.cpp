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

class linkedlist{// user define data structure
	
	public:
		Node* head;
		Node* tail;
		int size;
		
		linkedlist(){
			head=tail=NULL;
			size=0;
		}
		
		void InsertAtEnd(int val){
			Node* temp=new Node(val);
			if(size==0){
				head=tail=temp;
			}else{
				tail->next=temp;
				tail=temp;
			}
			size++;
		}
		
		void DeleteAtFront(){
			if(size==0){
				cout<<"no element || empty list"<<endl;
			}
			head=head->next;
			size--;
		}
		
		void DeleteAtTail(){
			if(size==0){
				cout<<"no element || empty list"<<endl;
			}
			Node* temp=head;
			while(temp->next!=tail){
				temp=temp->next;
			}
			temp->next=NULL;
			tail=temp;
		}
		
		void Display(){
			Node* temp =head;
			while(temp!=NULL){
				cout<<temp->val<<" ";
				temp=temp->next;
			}
			cout<<endl;
		}
		
};


int main(){
	
	linkedlist ll;
	ll.InsertAtEnd(10);
	ll.Display();
	ll.InsertAtEnd(20);
	ll.Display();
	ll.InsertAtEnd(30);
	ll.Display();
	ll.InsertAtEnd(40);
	ll.Display();//10 20 30 40
	cout<<"after delete the element from head"<<endl;//20 30 40
	ll.DeleteAtFront();
	ll.Display();
	cout<<"after delete the element from tail"<<endl;//20 30
	ll.DeleteAtTail();
	ll.Display();
	return 0;
}