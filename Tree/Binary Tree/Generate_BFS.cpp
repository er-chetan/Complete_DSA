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

void displaypre(Node* root){
	if(root==NULL){
		return;
	}
	cout<<root->val<<" ";
	displaypre(root->left);
	displaypre(root->right);
	
}

void printBFS(Node* root){
	queue<Node*> q;
	q.push(root);
	while(q.size()>0){
		Node* temp=q.front();
		q.pop();
		
		cout<<temp->val<<" ";
		if(temp->left!=NULL){
			q.push(temp->left);
		}
		if(temp->right!=NULL){
			q.push(temp->right);
		}
	}
	
}


int main(){
	
	int sort_arr[]={1,2,3,4,5,6,7};
	int n=sizeof(sort_arr)/sizeof(sort_arr[0]);
	cout<<"Binary Search Tree"<<endl;
	Node* BSTroot=BST(sort_arr,0,n-1);
	printBFS(BSTroot);
	
	return 0;
}

//// 897 96 66
