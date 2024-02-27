#include<iostream>
using namespace std;
//// use for the security issue

class player{
	private:
		int Score;
		int Health;
		
	public:
		void setScore(int s){
			Score=s;
		}
		
		void setHealth(int h){
			Health=h;
		}
		
		int getScore(){
			return Score;
		}
		
		int getHealth(){
			return Health;
		}			
};

int main(){
	
	player amit;
	
	amit.setScore(89);
	amit.setHealth(45);
	
	cout<<amit.getScore()<<endl;
	cout<<amit.getHealth()<<endl;
	
	
	return 0;
}





