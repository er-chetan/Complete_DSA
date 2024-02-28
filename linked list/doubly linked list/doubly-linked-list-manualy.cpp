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

void display(Node* head){
	cout<<"simple list"<<endl;
	while(head!=NULL){
		cout<<head->val<<" ";
		head=head->next;
	}
	cout<<endl;
}

void displayRev(Node* tail){
	cout<<"reverse list"<<endl;
	while(tail!=NULL){
		cout<<tail->val<<" ";
		tail=tail->prev;
	}
	cout<<endl;
}

void displayRec(Node* head){
	if(head==NULL){
		return;
	}
	cout<<head->val<<" ";
	displayRec(head->next);
	
}

void displayRecRev(Node* head){
	if(head==NULL){
		return;
	}
	displayRecRev(head->next);
	cout<<head->val<<" ";
	
}

int main(){
	
	Node* a=new Node(10);
	Node* b=new Node(20);
	Node* c=new Node(30);
	Node* d=new Node(40);
	Node* e=new Node(50);
	
	//next
	a->next=b;
	b->next=c;
	c->next=d;
	d->next=e;
	//prev
	
	b->prev=a;
	c->prev=b;
	d->prev=c;
	e->prev=d;
	
	display(a);
	displayRev(e);
	cout<<"recursively simple list"<<endl;
	displayRec(a);
	cout<<endl;
	cout<<"recursively reverse simple list"<<endl;
	displayRecRev(a);
	cout<<endl;
	
	displayRev(b);

	return 0;
		
}