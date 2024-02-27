 #include<iostream>
using namespace std;

class Vehicle{
	public:
		int vehicle_ka_public_1;
		int vehicle_ka_public_2;
		int vehicle_ka_public_3;
		
		virtual void show(){
			cout<<"Vehicle ka show"<<endl;
		}
// no. of virtual function increases the size if slightly increases even ek pointer ka hi 
// hi rhta hai 8 byte
		virtual void showing(){
			cout<<"Vehicle ka show"<<endl;
		}
		
};

class Bike: public Vehicle{
	public:
		int bike_ka_public_1;
		int bike_ka_public_2;
		
		void show(){
			cout<<"Bike ka show"<<endl;
		}
		void showing(){
			cout<<"Vehicle ka show"<<endl;
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
	Vehicle v;
	Bike b;
	Car c;
	
	cout<<"vehicle object-> "<<sizeof(v)<<endl;
	cout<<"bike object-> "<<sizeof(b)<<endl;
	cout<<"car object-> "<<sizeof(c)<<endl;
	return 0;
}