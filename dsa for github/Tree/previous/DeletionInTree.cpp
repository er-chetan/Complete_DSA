
#include<iostream>
using namespace std;
class Tree {
    public:
        int data;
        
        Tree* left = NULL,*right = NULL;
        // Constructor initialised
        Tree(int x) {
            data = x;
            left = NULL;
            right = NULL;
        }
};
void inorder_traversal (Tree *root) {
    if (root == NULL) return;
    // Visit Left subtree
    inorder_traversal(root -> left);
      // Print the data
    cout << root -> data << " ";
    // Visit right subtree
    inorder_traversal(root -> right);
  
}
Tree* Delete(Tree* root, int x) {
    // If leaf is encountered
    if (root == NULL) {
        cout << "Node not found ";
        return NULL;
    }
    // Recur for left subtree
    if (root -> data > x) {
        root -> left = Delete(root -> left, x);
    }
    // Recur for right subtree
    else if (root -> data < x){
        root -> right = Delete(root -> right , x);
    }
    else {
        // Left child NULL
        if (root -> left == NULL) {
            Tree *temp = root -> right;
            delete root;
            return temp;
        }
        // Right child NULL
        else if (root -> right == NULL) {
            Tree *temp = root -> left;
            delete root;
            return temp;
        }
        else {
            // Finding the inorder successor
            Tree *temp = root -> right;
            // Finding the leftmost node in right subtree
            while (temp -> left != NULL) temp = temp -> left;
            // Changing value of root
            root -> data = temp -> data;
            // Deleting the leftmost node;
            root -> right = Delete(root -> right, temp -> data); 
        }
    }
    return root;
    
}
int main() {
    Tree *root = new Tree(15);
    root -> left = new Tree(13);
    root -> right = new Tree(18);
    root -> left -> left = new Tree(8);
    root -> left -> right = new Tree(14);
    root -> right -> left = new Tree(16);
    root -> right -> right = new Tree(19);
    
    int first_delete = 8, second_delete = 13, third_delete = 18;
    
    cout << "Inorder Traversal – ";
    inorder_traversal(root);
    cout << endl;
    cout << endl;
    
    cout << "8 deleted \n";
    Delete(root, first_delete);
    cout << "Inorder Traversal – ";
    inorder_traversal(root);
    cout << endl;
    cout << endl;
    
    cout << "13 deleted \n";
    Delete(root, second_delete);
    cout << "Inorder Traversal – ";
    inorder_traversal(root);
    cout << endl;
    cout << endl;
    
    cout << "18 deleted \n";
    Delete(root, third_delete);
    cout << "Inorder Traversal – ";
    inorder_traversal(root);
    cout << endl;
    
}
