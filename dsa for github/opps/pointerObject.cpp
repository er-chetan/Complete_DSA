#include<iostream>
using namespace std;

class player{
	private:
		int score;
		int health;
		int age;
		bool alive;
	
	public:	
	int getscore(){
		return score;
	}
	
	int gethealth(){
		return health;
	}
	
	int getage(){
		return age;
	}
	
	int getalive(){
		return alive;
	}	
	
	void setscore(int score){
		this->score=score;
	}
	void sethealth(int health){
		this->health=health;
	}
	void setage(int age){
		this->age=age;
	}
	void setalive(bool alive){
		this->alive=alive;
	}
		
};

int main(){
	
	player harsh;
	player chetan;////// static allocation or compile time
	
	
	player *urvi=new player;//// dynamic allocation or run time
	player urviobject=*urvi;
	
	//---------- first method -----------//
	// create another object that stores the address of the object
	
	urviobject.setage(23);
	cout<<urviobject.getage()<<endl;
	
	//----------- second method ---------//
	// by * operator
	
	(*urvi).sethealth(45);
	cout<<(*urvi).gethealth()<<endl;
	
	//---------- third method -----------//
	// by -> sign
	
	urvi->setscore(67);
	cout<<urvi->getscore();
	
	
	return 0;
}