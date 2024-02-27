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



////// passing a class object to the function

int addage(player a, player b){
	return a.getage()+b.getage();
}

////// returning the class

player getMaxscore(player a,player b){
	if(a.getscore()>b.getscore()){
		return a;
	}else{
		return b;
	}
}
 

int main(){
	
	player harsh;
	player chetan;
	
	harsh.setscore(34);
	harsh.sethealth(57);
	harsh.setage(47);
	harsh.setalive(true);
	
	chetan.setscore(44);
	chetan.sethealth(23);
	chetan.setage(57);
	chetan.setalive(false);
	
	cout<<addage(harsh,chetan)<<endl;
	player result=getMaxscore(harsh,chetan);
	cout<<result.getage()<<endl;
	cout<<result.getscore();
	
	return 0;
}