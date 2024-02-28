#include<iostream>

#include<process.h>
using namespace std;
struct Node{
	int info;
	Node *next;
}*start,*newptr,*save,*cptr,*rear;

Node*Create_new_Node(int);
void Insert_Beg(Node*);
void Display(Node*);

Node*Create_New_Node(int n){
	cptr=new Node;
	cptr->info=n;
	cptr->next=NULL;
	return cptr;
}
	
void Insert_End(Node*np){
		if(start==NULL){
		start=rear=np;
		}else{
			rear->next=np;
			rear=np;
		}
	}
	
	void Display(Node*np){
		while(np!=NULL){
			cout<<np->info<<" ->";
			np=np->next;
		}
		cout<<"!!!\n";
	}
	
int main(){
	start=rear=NULL;
	int inf;
	char ch='y';
	while(ch=='y'||ch=='Y'){
		system("cls");
		cout<<"\nEnter the infromation for the new node....";
		cin>>inf;
		cout<<"\nCreating New Nodes!! Press Enter to continue... ";
		system("pause");
		newptr =Create_New_Node(inf);
		
			if(newptr!=NULL){
			cout<<"\n\nNew node succesfully.press enter to continue...";
			system("pause");
			}else{
				cout<<"\nCannot create new node!! Aborting!!\n";
				system("pause");
				exit(1);
			}
			
		cout<<"\n\nNow inserting this node in the begining of list...\n";
		cout<<"press enter to continue...\n";
		system("pause");
		Insert_End(newptr);
		cout<<"\nNow the list is :\n";
		Display(start);
		cout<<"\npress Y to enter more nodes ,N to exit...\n";
		cin>>ch;
	}
}
