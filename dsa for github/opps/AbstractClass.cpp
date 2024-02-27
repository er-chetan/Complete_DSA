#include<iostream>
using namespace std;

class Vehicle{
	public:
		int vehicle_ka_public;
		
		virtual void ShowOne()=0;
		virtual void ShowTwo()=0;
};


class Bike: public Vehicle{
	public:
		int bike_ka_public;
		
//		void ShowOne(){
//			cout<<"Bike ka show"<<endl;
//		}
//		void ShowTwo(){
//			cout<<"Bike ka show"<<endl;
//		}
		
};

class Car: public Bike{
	public:
		int car_ka_public;
		
		 
		
};



int main(){
	
//	Bike b;
//	b.ShowOne();
//	b.ShowTwo();
	
	return 0;
}