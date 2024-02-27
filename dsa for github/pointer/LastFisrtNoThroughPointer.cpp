#include<iostream>
using namespace std;

	void display(int n,int* ptr1,int* ptr2){
	 	
	 	*ptr2=n%10;

	 	while(n>9){
	 		
	 		n=n/10;
		 }
		 *ptr1=n;
		 
	}

int main(){
	
	int n,last,first;
	cin>>n;
	int* ptr1=&first;
	int* ptr2=&last; 
	display(n,ptr1,ptr2);
	cout<<first<<" "<<last;
 	return 0;	
}