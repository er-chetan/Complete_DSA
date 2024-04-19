#include<iostream>
using namespace std;

class vehicle{
	public:
		int tyresize;
		int enginesize;
		int lights;
		string company_name;
		
		
		vehicle(){
			cout<<"vehicle constructor call!!"<<endl;
		}
};

class Car : public vehicle{
	public:
		int steeringsize;
};

class Bike : public vehicle{
	public:
		int handlesize;
		
		Bike(){
			cout<<"bike constructor call!!"<<endl;
		}
};



int main(){
	
	Bike honda;
	
//	honda.tyresize=4;
//	honda.enginesize=45;
//	honda.lights=2;
//	honda.company_name="bajaj";
//	honda.handlesize=34;
//	
//	cout<<honda.tyresize<<" "<<honda.enginesize<<" "<<honda.lights<<" "<<honda.company_name<<" "<<honda.handlesize<<endl;
	
	
	
	
}