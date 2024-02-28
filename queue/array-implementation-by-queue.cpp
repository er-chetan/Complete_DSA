#include<iostream>
#include<queue>
using namespace std;

class Queue{
	public:
		int front;
		int back;
		int arr[];
		
		Queue(int val){
			front=0;
			back=0;
			arr[val];
		}
		
		void push(int val){
			if(back>=5){
				cout<<"queue is full !!!"<<endl;
				return;
			}
			arr[back]=val;
			back++;
		}
		
		void pop(){
			if(back-front==0){
				cout<<"queue is empty !!!"<<endl;
				return;
			}
			front++;
		}
		
		void display(){
			for(int i=front;i<back;i++){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
		
		int frontqueue(){
			if(back-front==0){
				cout<<"queue is empty !!!"<<endl;
				return -1;
			}
			return arr[front];
		}
		
		int backqueue(){
			if(back-front==0){
				cout<<"queue is empty !!!"<<endl;
				return -1;
			}
			return arr[back-1];
		}
		
		int sizeOfqueue(){
			return back-front;
		}
		
		void emptyque(){
			if(back-front==0){
				cout<<"yes queue is empty !!!"<<endl;
			}else{
				cout<<"not empty!!!!"<<endl;
			}
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
	q.emptyque();
	q.display();
	cout<<"size of an array queue --> "<<q.sizeOfqueue()<<endl;
	q.pop();
	q.display();
	q.pop();
	q.display();
	q.pop();
	q.display();
	q.emptyque();
	q.pop();
	q.display();
	cout<<"size of an array queue --> "<<q.sizeOfqueue()<<endl;
	cout<<"front of the queue --> "<<q.frontqueue()<<endl;
	q.emptyque();
	q.push(45);
	return 0;
}