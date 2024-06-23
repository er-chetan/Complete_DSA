#include<iostream>
#include<queue>
#include<algorithm>
#include<unordered_map>
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

int level(Node* root){
    if(root==NULL){
        return 0;
    }	
    return 1+max(level(root->left),level(root->right));
}

/// -------- views in tree -------- ///

	/// Right View by BFS and DFS

	///// By BFS

void right_view_BFS(Node* root,int curr,int level,vector<int> &ans){
    if(root==NULL){
        return;
    }
    if(level==curr){
        ans[curr]=root->val;
        return;
    }
    curr++;
    right_view_BFS(root->left,curr,level,ans);
    right_view_BFS(root->right,curr,level,ans);   
}

void  left_view_BFS(Node* root,int curr,int level,vector<int> &ans){
    if(root==NULL){
        return;
    }
    if(level==curr){
        ans[curr]=root->val;
        return;
    }
    curr++;
    left_view_BFS(root->right,curr,level,ans);
    left_view_BFS(root->left,curr,level,ans);   
}


void level_order_right(Node* root,vector<int> &ans){
	int n=level(root);
    for(int i=0;i<n;i++){
        right_view_BFS(root,0,i,ans);
    }
} 
void level_order_left(Node* root,vector<int> &ans){
	int n=level(root);
    for(int i=0;i<n;i++){
        left_view_BFS(root,0,i,ans);
    }
} 

/// By DFS

void RightViewPreorder(Node* root,int level,vector<int> &ans){
    if(root==NULL){
       return;
    }
    ans[level]=root->val;
    RightViewPreorder(root->left,level+1,ans);
    RightViewPreorder(root->right,level+1,ans); /// preorder

} 
void LeftViewPreorder(Node* root,int level,vector<int> &ans){
    if(root==NULL){
       return;
    }
    ans[level]=root->val;
    LeftViewPreorder(root->right,level+1,ans);
    LeftViewPreorder(root->left,level+1,ans); 
} 

void BottomView(Node* root,vector<int> &bottom){
	if(root==NULL) return;
	
	if(root->left==NULL && root->right==NULL){
		bottom.push_back(root->val);
	}else if(root->left!=NULL && root->right==NULL){
		bottom.push_back(root->val);
	}else if(root->right!=NULL && root->left==NULL){
		bottom.push_back(root->val);
	}
	BottomView(root->left,bottom);
	BottomView(root->right,bottom);
} 

void Topview(Node * root, int dis, int level, auto & mp) {
  if (root == NULL) {
    return;
  }
  if (mp.find(dis) == mp.end() || level < mp[dis].second) {
    mp[dis] = {
      root->val,
      level
    };
  }
  Topview(root -> left, dis - 1, level + 1, mp);
  Topview(root -> right, dis + 1, level + 1, mp);
}

int main(){
	
//	int arr[]={1,2,3,4,INT_MIN,5,INT_MIN};
	int arr[]={1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,28};
	int n=sizeof(arr)/sizeof(arr[0]);
	Node* root=construct(arr,n);
	
	/// ------->> right view <<--------- /////
	
		cout<<"right View of Tree by DFS"<<endl;
		vector<int> rightDFS(level(root),0);
		RightViewPreorder(root,0,rightDFS);// by DFS
		for(int i=0;i<rightDFS.size();i++){
			cout<<rightDFS[i]<<" ";
		}
		cout<<endl;
		cout<<"right View of Tree by BFS"<<endl;
		vector<int> rightBFS(level(root),0);
		level_order_right(root,rightBFS);// by BFS
		for(int i=0;i<rightBFS.size();i++){
			cout<<rightBFS[i]<<" ";
		}
		cout<<endl;

	/// ------>> left view
		cout<<"left View of Tree by DFS"<<endl;
		vector<int> leftDFS(level(root),0);
		LeftViewPreorder(root,0,leftDFS);// by DFS
		for(int i=0;i<leftDFS.size();i++){
			cout<<leftDFS[i]<<" ";
		}
		cout<<endl;
		cout<<"left View of Tree by BFS"<<endl;
		vector<int> leftBFS(level(root),0);
		level_order_left(root,leftBFS);// by BFS
		for(int i=0;i<leftBFS.size();i++){
			cout<<leftBFS[i]<<" ";
		}
		cout<<endl;
	/// ------>> bottom view
		cout<<"bottom View of Tree"<<endl;
		vector<int> Bottom;
		BottomView(root,Bottom);
		for(auto ele : Bottom){
			cout<<ele<<" ";
		}
		cout<<endl;
	/// ------>> top view
		cout<<"Top View of Tree"<<endl;
		unordered_map < int, pair < int, int >> mp;
		Topview(root, 0, 0, mp);
		for (auto it: mp) {
			cout << it.second.first << " ";
		}
	
	return 0;
}