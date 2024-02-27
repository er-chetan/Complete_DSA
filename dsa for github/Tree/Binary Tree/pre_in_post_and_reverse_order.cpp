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

/// this is a pre order ///
void displayPre(Node* root){
	if(root==NULL){
		return;
	}
	cout<<root->val<<" ";
	displayPre(root->left);
	displayPre(root->right);
}
void displayPreRev(Node* root){
	if(root==NULL){
		return;
	}
	cout<<root->val<<" ";
	displayPreRev(root->right);
	displayPreRev(root->left);
}

/// in order ///

void displayIn(Node* root){
	if(root==NULL){
		return;
	}
	displayIn(root->left);
	cout<<root->val<<" ";
	displayIn(root->right);
}
void displayInRev(Node* root){
	if(root==NULL){
		return;
	}
	displayInRev(root->right);
	cout<<root->val<<" ";
	displayInRev(root->left);
}
void displayPost(Node* root){
	if(root==NULL){
		return;
	}
	displayPost(root->left);
	displayPost(root->right);
	cout<<root->val<<" ";
}
void displayPostRev(Node* root){
	if(root==NULL){
		return;
	}
	displayPostRev(root->right);
	displayPostRev(root->left);
	cout<<root->val<<" ";
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
//	displayPre(a);
//	cout<<endl;
//	displayPreRev(a);
	
	// in order //
//	displayIn(a);
//	cout<<endl;
//	displayInRev(a);
	
	// post //
	displayPost(a);
	cout<<endl;
	displayPostRev(a);
	return 0;
}