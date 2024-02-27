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

void display(Node* head){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->val<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

void displayrec(Node* head){// by recursively
	if(head==NULL){
		cout<<endl;
		return;
	}
	cout<<head->val<<" ";
	displayrec(head->next);
}

void Reverse_displayRec(Node* head){// by recursively print the list in reverse order
	if(head==NULL){
		cout<<endl;
		return;
	}
	Reverse_displayRec(head->next);
	cout<<head->val<<" ";
}

void display3(Node* head){// not using new address temp to store addresses of node
	while(head!=NULL){
		cout<<head->val<<" ";
		head=head->next;
	}
}

int size(Node* head){
	Node* temp=head;
	int count=0;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	return count;
}

void insertend(Node* head,int val){
	Node* t=new Node(val);
	
	while(head->next!=NULL){
		head=head->next;
	}
	head->next=t;
}

int main(){
	
	Node* a=new Node(10);
	Node* b=new Node(20);
	Node* c=new Node(30);
	Node* d=new Node(40);
	Node* e=new Node(50);
	
	a->next=b;
	b->next=c;
	c->next=d;
	d->next=e;
	display(a);
	
//	int s=size(a);
//	cout<<"size of the linked list -> "<<s<<endl;
//	displayrec(a);
//	display3(a);
//	Reverse_displayRec(a);
	insertend(a,50);
	cout<<endl;
	display(a);
	
	return 0;
}