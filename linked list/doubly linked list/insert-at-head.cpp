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

class DoublyLinkedList{
	
	public : 
	
	Node* head;
	Node* tail;
	int size;
	
	DoublyLinkedList(){
		head=NULL;
		tail=NULL;
		size=0;
	}
	
	void InsertAtHead(int val){
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
	
	void display(){
		cout<<"print the list"<<endl;
		Node* temp=head;
		while(temp!=NULL){
			cout<<temp->val<<" ";
			temp=temp->next;
		}
		cout<<endl;
	}
	
	void displayRev(){
		cout<<"print the list in reverse order"<<endl;
		Node* temp=tail;
		while(temp!=NULL){
			cout<<temp->val<<" ";
			temp=temp->prev;
		}
		cout<<endl;
	}
	
};

int main(){
	
	DoublyLinkedList dl;
	dl.InsertAtHead(30);
	dl.InsertAtHead(20);
	dl.InsertAtHead(10);
	
	dl.display();
	dl.displayRev();
	return 0;
}