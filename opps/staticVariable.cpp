#include<iostream>
using namespace std;

//void print(){
//	static int b=4;
//	
//	cout<<"value of b-> "<<b<<endl;
//	b++;
//}


class Bike{
	public:
	static int no_of_bike;
	int tyresize;
	int enginesize;
	
	Bike(int tyresize,int enginesize){
		this->tyresize=tyresize;
		this->enginesize=enginesize;
	}
	
	static void increasebike(){
		no_of_bike++;
	}	
};

int Bike::no_of_bike=0;

int main(){
	 
	Bike bjaj(10,20);
	Bike splendor(17,30);
	
	bjaj.increasebike();
	
	cout<<bjaj.tyresize<<" "<<bjaj.enginesize<<" "<<bjaj.no_of_bike<<endl;
	splendor.increasebike();
	
	cout<<splendor.tyresize<<" "<<splendor.enginesize<<" "<<splendor.no_of_bike<<endl;
//	 

//print();
//print();
	return 0;
}