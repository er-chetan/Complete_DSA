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
	
	void DeleteAtTail(){
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
	
	
};

int main(){
	
	DoublyLinkedList dl;
	dl.InsertAtTail(10);
	dl.InsertAtTail(20);
	dl.InsertAtTail(30);
	dl.display();
	dl.DeleteAtTail();
	dl.display();
	return 0;
}