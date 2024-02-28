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
	
	public:
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
	
	void InsertAtTail(int val){
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
	
	////////////////////// insert at index //////////////////////
	
	
	void InsertAtIndex(int val,int idx){
		if(idx<0 || idx>size){
			cout<<"invalid index"<<endl;
		}else if(idx==0){
			InsertAtHead(val);
		}else if(idx==size){
			InsertAtTail(val);
		}else{
			Node* temp=head;
			Node* t=new Node(val);
			for(int i=1;i<=idx-1;i++){
				temp=temp->next;
			}
			t->next=temp->next;
			temp->next=t;
			t->prev=temp;
			t->next->prev=t;
			size++;
		}
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
	
};

int main(){
	
	DoublyLinkedList dl;
	dl.InsertAtTail(10);
	dl.InsertAtTail(20);
	dl.InsertAtTail(30);
	dl.InsertAtTail(40);
	dl.display();

	dl.InsertAtIndex(25,1);
	dl.display();
	return 0;
}