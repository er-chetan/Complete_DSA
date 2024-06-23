#include<iostream>
#include<queue>
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

Node* construct(int arr[],int n){
	queue<Node*> q;
	Node* root=new Node(arr[0]);
	q.push(root);
	int i=1;
	int j=2;
	while(q.size()>0 && i<n){
		Node* temp= q.front();
		q.pop();
		Node* l;
		Node* r;
		
		if(arr[i]!=INT_MIN){
			l=new Node(arr[i]);
		}else{
			l=NULL;
		}
		
		if(j!=n && arr[j]!=INT_MIN){
			r=new Node(arr[j]);
		}else{
			r=NULL;
		}
		temp->left=l;
		temp->right=r;
		
		if(l!=NULL){
			q.push(l);
		}
		if(r!=NULL){
			q.push(r);
		}
		i+=2;
		j+=2;
		
	}
	return root;
}

void nthlevel(Node* root,int curr,int level){
	if(root==NULL){
		return;
	}
	if(level==curr){
		cout<<root->val<<" ";
		return ;
	}
	curr++;
	nthlevel(root->left,curr,level);
	nthlevel(root->right,curr,level);
}
int level(Node* root){
	if(root==NULL){
		return 0;
	}	
	return 1+max(level(root->left),level(root->right));
}

void level_order(Node* root){
	int n=level(root);
	for(int i=1;i<=n;i++){
		nthlevel(root,1,i);
		cout<<endl;
	}
}

void left_boundary(Node* root){
	if(root==NULL){
		return;
	}
	if(root->left==NULL && root->right==NULL){
		return;
	}
	cout<<root->val<<" ";
	left_boundary(root->left);
	if(root->left==NULL){
		left_boundary(root->right);
	}
}

void bottom_boundary(Node* root){
	if(root==NULL){
		return;
	}
	if(root->left==NULL && root->right==NULL){
		cout<<root->val<<" ";
	}
	bottom_boundary(root->left);
	bottom_boundary(root->right);	
}

void right_boundary(Node* root){
	if(root==NULL){
		return;
	}
	if(root->left==NULL && root->right==NULL){
		return;
	}
	right_boundary(root->right);
	if(root->right==NULL){
		right_boundary(root->left);
	}
	cout<<root->val<<" ";
}

void boundary_of_tree(Node* root){
	cout<<"left Boundary of tree"<<endl;
	left_boundary(root);
	cout<<endl;
	cout<<"right Boundary of tree"<<endl;
	right_boundary(root->right);
	cout<<endl;
	cout<<"bottom Boundary of tree"<<endl;
	bottom_boundary(root);
}

int main(){
	
	int arr[]={1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,28};
//	int arr[]={4,5,2,INT_MIN,INT_MIN,3,1,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	Node* root=construct(arr,n);
	boundary_of_tree(root);
	return 0;
}