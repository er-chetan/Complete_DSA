#include<iostream>
using namespace std;

class Node{/// user define data type
	
	public:
		
		int val;
		Node* left;
		Node* right;
		
		Node(int val){
			this->val=val;
			this->left=NULL;
			this->right=NULL;
		}	
};


void display(Node* root,int curr,int level){
	if(root==NULL){
		return;
	}
	if(level==curr){
		cout<<root->val<<" ";
		return ; // optimised code 
	}
	curr++;
	display(root->left,curr,level);
	display(root->right,curr,level);
}


int main(){
	
	Node* a=new Node(1);
	Node* b=new Node(2);
	Node* c=new Node(3);
	Node* d=new Node(4);
	Node* e=new Node(5);
	Node* f=new Node(6);
	Node* g=new Node(7);
	
	///establish the connnection
	
	a->left=b;
	a->right=c;
	b->left=d;
	b->right=e;
	c->left=f;
	c->right=g;
	///// pre order /////
	int curr=1,level=3;
	display(a,curr,level);
	cout<<endl;
 
	return 0;
}