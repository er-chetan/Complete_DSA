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
		
		int GetElementByIndex(int idx){
			Node* temp=head;
			int index;
				if(idx<0 || idx>=size){
				cout<<"invalid index value ";
			}else if(idx==0){
				index=head->val;// return head.val
			}else if(idx==size-1){
				index=tail->val;// return tail.val
			}else {
				
				for(int i=1;i<=idx;i++){
					temp=temp->next;
				}
				index=temp->val;
			}
			
			return index;
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
	int return_index=ll.GetElementByIndex(4);
	cout<<"element by passing the index of an element -> "<<return_index;
	
	
	return 0;
}