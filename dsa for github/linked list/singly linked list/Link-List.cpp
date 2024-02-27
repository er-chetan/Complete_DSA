#include<iostream>
using namespace std;

class Node{
	public:
		int val;
		Node* next;
		
		Node(int val){
			this->val=val;
			this->next=NULL;
		}
};


int main(){
	
	Node a(10);
	Node b(20);
	Node c(30);
	Node d(40);
	
	/////// forming link //////
	
	a.next=&b;
	b.next=&c;
	c.next=&d;
	d.next=NULL;
	
	/// print the value of b with object;
	cout<<b.val<<endl;
	
	
	/// print the value of b with a object or without object b
	cout<<(a.next)->val<<endl;// working with address of b
	cout<<(*(a.next)).val<<endl;//  working with value of b node
	
	
	///// update the value of b ///
	a.next->val=70;
	cout<<"updated value of b"<<" "<<a.next->val<<endl;
	cout<<b.val<<endl;
	
	
	// access the value of c from a /// values are 10 70 30 40
	cout<<c.val<<endl;
	cout<<"access the value of c from a"<<" "<<a.next->next->val<<endl;
	cout<<((a.next)->next)->val<<endl;// use the brackets
	
	 
	// access the value of d from a "simply"
	cout<<"access the value of d from a"<<" "<<a.next->next->next->val<<endl;// working with addresses
	/// by using * asterisk symbol
	cout<<"using asterisk d from a->"<<(*(*(*(a.next)).next).next).val<<endl; // working with object d
	
	
	
	return 0;
}