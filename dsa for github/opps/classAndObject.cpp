#include<iostream>
using namespace std;

class player{
	public:
	int score;
	int health;
};

int main(){
	
	player amit;
	amit.score=45;
	amit.health=56;
	
	cout<<"score"<<amit.score<<" "<<endl;
	cout<<"health"<<amit.health<<" "<<endl;
	
	return 0;
	
}