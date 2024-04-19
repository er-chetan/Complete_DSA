#include<iostream>
using namespace std;

class Vehicle{
	public:
		int vehicle_ka_public;
		
		virtual void show(){
			cout<<"Vehicle ka show"<<endl;
		}
};


class Bike: public Vehicle{
	public:
		int bike_ka_public;
		
		void show(){
			cout<<"Bike ka show"<<endl;
		}
		
};

class Car: public Bike{
	public:
		int car_ka_public;
		
		void show(){
			cout<<"Car ka show"<<endl;
		}
		
};


int main(){
	
//	Bike b;
//	Vehicle *a;
//	a=new Bike;	//a=&b;
//	a->show();
//	a=new Vehicle;
//	a->show();
//	a=new Car;
//	a->show();
	
	Bike *b;
	b=new Car;
	b->show();
	Car c;
	c.show();
	 
	
	return 0;
}