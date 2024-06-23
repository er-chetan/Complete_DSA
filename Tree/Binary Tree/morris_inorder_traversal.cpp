#include<iostream>
#include<queue>
using namespace std;


class Node{
	public: 
		int val;
		Node* left;
		Node* right;
		
		Node(int val){
			this->val=val;
			this->left=right=NULL;
		}	
};

/// Binary search tree;

Node* BST(int arr[],int lo,int hi){
	if(lo>hi){
		return NULL;
	}
	int mid=lo+(hi-lo)/2;
	cout<<"lo -> "<<lo<<" "<<"hi -> "<<hi<<" "<<"mid -> "<<" "<<mid<<" = "<<"mid value-> "<<arr[mid]<<endl;
	Node* root= new Node(arr[mid]);
	root->left=BST(arr,lo,mid-1);
	root->right=BST(arr,mid+1,hi);
	return root;
}

void morris_traversal(Node* root){
	Node* curr=root;
	while(curr!=NULL){
		Node* pred=curr->left;
		if(curr->left!=NULL){
			while(pred->right!=NULL && pred->right!=curr){
				pred=pred->right;
			}
			if(pred->right==NULL){// link
				pred->right=curr;
				curr=curr->left;
			}else{ // unlink
				pred->right=NULL;
				if(curr->val!=-1){
					cout<<curr->val<<" ";
				}
				curr=curr->right;
			}
		}else{
			if(curr->val!=-1){
				cout<<curr->val<<" ";
			}
			curr=curr->right;
		}
	}
}

void displayIN(Node* root){
	if(root==NULL){
		return;
	}
	displayIN(root->left);
	if(root->val!=-1){
		cout<<root->val<<" ";
	}
	displayIN(root->right);
	
}

 

int main(){
	
	int sort_arr[]={3,5,6,8,10,15,18,20};
	int n=sizeof(sort_arr)/sizeof(sort_arr[0]);
	cout<<"Binary Search Tree"<<endl;
	Node* BSTroot=BST(sort_arr,0,n-1);
	displayIN(BSTroot);
	cout<<endl;
	morris_traversal(BSTroot);
	cout<<endl;
	displayIN(BSTroot);
	
	 
	
	return 0;
}

//// 897 96 66
