
		
		
		
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
	
	int GetElementByIndex(int idx){
			
		int index;
		if(idx<0 || idx>=size){
		cout<<"invalid index value ";
		}else if(idx==0){
				index=head->val;// return head.val
		}else if(idx==size-1){
				index=tail->val;// return tail.val
		}else{
			
			if(idx<=size/2){
				Node* temp=head;
				for(int i=1;i<=idx;i++){
					temp=temp->next;
				}
				index=temp->val;
			}else{
				Node* temp=tail;
				for(int i=1;i<size-idx;i++){
					temp=temp->prev;
				}
				index=temp->val;
			}
		}
			
		return index;
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
	dl.InsertAtTail(50);
	dl.InsertAtTail(60);
	dl.display();
	cout<<"element by index"<<" "<<dl.GetElementByIndex(3)<<endl;
	return 0;
}		