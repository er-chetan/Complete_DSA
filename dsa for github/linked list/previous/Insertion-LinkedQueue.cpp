#include<iostream>
#include<stdlib.h>
#include<process.h>
using namespace std;
struct Node{
	int info;
	Node *next;
}*front,*newptr,*save,*cptr,*rear;

Node*Create_new_Node(int);
void Insert_Beg(Node*);
void Display(Node*);
void DelNode_Q();

Node*Create_New_Node(int n){
	cptr=new Node;
	cptr->info=n;
	cptr->next=NULL;
	return cptr;
}

void Insert(Node*np){
		if(front==NULL){
		front=rear=np;
		}else{
			rear->next=np;
			rear=np;
		}
	}
	
void DelNode_Q(){
	if(front==NULL){
		cout<<"underflow!!!\n";
	}else{
		cptr=front;
		front=front->next;
		delete cptr;
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
	front=rear=NULL;
	int inf;
	char ch='y';
	while(ch=='y'||ch=='Y'){
		system("cls");
		cout<<"\nEnter the infromation for the new node....";
		cin>>inf;
		cout<<"\nCreating New Nodes!! Press Enter to continue... ";
		system("pause");
		newptr =Create_New_Node(inf);
		
		if(newptr==NULL){
				cout<<"\nCannot create new node!! Aborting!!\n";
				exit(1);
		}
		Insert(newptr);
		cout<<"\nPress Y to enter more nodes,N to exit...\n";
		cin>>ch;
	}
	system("cls");
	do{
		cout<<"\nThe Linked-Queue now is(Front to Rear):\n";
		Display(front);
		cout<<"want to delete first node?(y/n)";
		cin>>ch;
		if(ch=='y'||ch=='Y'){
			DelNode_Q();
		}
	}while(ch=='y'||ch=='Y');
		return 0;
}

		
