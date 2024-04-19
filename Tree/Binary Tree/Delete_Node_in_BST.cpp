#include<iostream>
#include<queue>
using namespace std;


class Node{ // user define data type create tree Node 
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

///// find predecessor of target node ////


Node* iop(Node* root){
	while(root->right!=NULL){
		root=root->right;
	}
	return root;
}


///// deletion and update the node ////// 

Node* DeleteNode(Node* root,int target){
	if(root==NULL){
		return NULL;
	}
	if(root->val==target){
		if(root->left==NULL && root->right==NULL){
			return NULL;
		}else if(root->left==NULL || root->right==NULL){
			if(root->left==NULL){
				return root->right;
			}else{
				return root->left;
			}
		}else if(root->left!=NULL && root->right!=NULL){
			Node* pre=iop(root->left);
			root->val=pre->val;
			root->left=DeleteNode(root->left,pre->val);
		}
	}else if(root->val>target){
		root->left=DeleteNode(root->left,target);
	}else{
		root->right=DeleteNode(root->right,target);
	}
	
	return root;
}

/// display tree with pre order traversal ///

void displaypre(Node* root){
	if(root==NULL){
		return;
	}
	cout<<root->val<<" ";
	displaypre(root->left);
	displaypre(root->right);
	
}

/// display tree with BFS traversal ///

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
	
	int sort_arr[]={1,2,3,4,5,6,7,8,9,10};
	int n=sizeof(sort_arr)/sizeof(sort_arr[0]);
	cout<<"Binary Search Tree"<<endl;
	Node* BSTroot=BST(sort_arr,0,n-1);
	cout<<"before delete an element print a tree with breadth first order"<<endl;
	printBFS(BSTroot);
	cout<<endl;
	cout<<"before delete an element print a tree with pre order"<<endl;
	displaypre(BSTroot);
	cout<<endl;
	cout<<"After delete an element print a tree with breadth first order"<<endl;
	DeleteNode(BSTroot,6);
	printBFS(BSTroot);
	cout<<endl;
	cout<<"after delete an element print a tree with pre order"<<endl;
	displaypre(BSTroot);
	
	return 0;
}


