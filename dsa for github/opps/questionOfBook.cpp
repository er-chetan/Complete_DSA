#include<iostream>
using namespace std;

class Book{
	
	public:
		char name;
		int price;
		int npages;
	
	int countBooks(int givenprice){
		if(price<givenprice){
			return 1;
		}else {
			return 0;
		}
	}
	
	bool isBookPresent(char title){
		if(name==title){
			return true;
		}else{
			return false;
		}
	}	
};



int main(){
	Book thinkbig;
	
	thinkbig.name='A';
	thinkbig.price=555;
	
	cout<<thinkbig.countBooks(500)<<endl;
	cout<<thinkbig.isBookPresent('A');
	
}