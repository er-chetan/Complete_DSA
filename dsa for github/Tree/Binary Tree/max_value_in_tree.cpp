#include<iostream>
#include<algorithm>
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


int max_value(Node* root){
	if(root==NULL){
		return INT_MIN;
	}
	int lmax=max_value(root->left);
	int rmax=max_value(root->right);
	
	return max(root->val,max(lmax,rmax)) ; 
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
	cout<<"\n max value in tree --> "<<max_value(a);
	
	return 0;
}