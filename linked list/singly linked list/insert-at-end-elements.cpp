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
	ll.Display();
	cout<<endl;
	cout<<ll.size;
	
	
	return 0;
}