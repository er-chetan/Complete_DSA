#include<iostream>
#include<queue>
using namespace std;

class Queue{
	public:
		int front;
		int back;
		int s;
		int m;
		int arr[];
		
		Queue(int val){
			front=0;
			back=0;
			s=0;
			m=val;
			arr[m];			
		}
		
		void push(int val){
			if(s>=m){
				cout<<"queue is full !!!"<<endl;
				return;
			}
			arr[back]=val;
			back++;
			if(back==m){
				back=0;
			}
			s++;
		}
		
		void pop(){
			if(s==0){
				cout<<"queue is empty !!!"<<endl;
				return;
			}
			front++;
			if(front==m){
				front=0;
			}
			s--;
		}
		
		void display(){
			for(int i=front;i<m;i++){
				cout<<arr[i]<<" ";
			}
			if(front>=back){
				for(int i=0;i<back;i++){
					cout<<arr[i]<<" ";
				}
			}
			cout<<endl;
			
		}
		
		int frontqueue(){
			if(s==0){
				cout<<"queue is empty !!!"<<endl;
				return -1;
			}
			if(front==0){
				return arr[m-1];
			}
			return arr[front];
		}
		
		int backqueue(){
			if(s==0){
				cout<<"queue is empty !!!"<<endl;
				return -1;
			}
			if(back==0){
				return arr[m-1];
			}
			return arr[back-1];
		}
		
		int sizeOfqueue(){
			return s;
		}
		
		void emptyque(){
			if(s==0){
				cout<<"yes queue is empty !!!"<<endl;
			}else{
				cout<<"not empty!!!!"<<endl;
			}
		}
		
		void actualqueue(){
			cout<<"actual queue --> ";
			for(int i=0;i<s;i++){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
		
};

int main(){
	int n=5;
	Queue q(n);
	
	q.push(10);
	cout<<"front and back --> "<<q.frontqueue()<<" & "<<q.backqueue()<<endl;
	q.push(20);
	cout<<"front and back --> "<<q.frontqueue()<<" & "<<q.backqueue()<<endl;
	q.push(30);
	cout<<"front and back --> "<<q.frontqueue()<<" & "<<q.backqueue()<<endl;
	q.push(40);
	cout<<"front and back --> "<<q.frontqueue()<<" & "<<q.backqueue()<<endl;
	q.push(50);
	cout<<"front and back --> "<<q.frontqueue()<<" & "<<q.backqueue()<<endl;
	q.display();
	q.pop();
	q.display();
	q.pop();
	q.display();
	q.push(34);
	q.display();
	q.push(56);
	q.display();
	cout<<"front and back --> "<<q.frontqueue()<<" & "<<q.backqueue()<<endl;
	q.actualqueue();
	
	return 0;
}