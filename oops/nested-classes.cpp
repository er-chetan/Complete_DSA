#include<iostream>
using namespace std;

class Gun{
	public:
		int ammo;
		int damage;
		int scope;
		
		void setAmmo(int ammo){
			this->ammo=ammo;
		}
		void setDamage(int damage){
			this->damage=damage;
		}
		void setScope(int scope){
			this->scope=scope;
		}
		
		int getAmmo(){
			return ammo;
		}
		
		int getScope(){
			return scope;
		}
		
		int getDamage(){
			return damage;
		}
					
};

class player{
	
	private:
		
		class Helmet{
			int hp;
			int level;
		
		public:
		
		int getHp(){
			return hp;
		}
		
		int getLevel(){
			return level;
		}
		
		void setHp(int hp){
			this->hp=hp;
		}
		
		void setLevel(int level){
			this->level=level;
		}	
			
	};	
		int score;
		int health;
		int age;
		bool alive;
		Gun gun;
		Helmet helmet;
	
	
	
		
	public:	
		Gun getGun(){
			return gun;
		}	
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
		
		void setGun(Gun gun){
			this->gun=gun;
		}
	
		void setHelmet(int level){
			Helmet *helmet=new Helmet;
			helmet->setLevel(level);
			int health;
			if(level==1){
				health=100;
			}else if(level==2){
				health=200;
			}else if(level==3){
				health=1000;
			}else{
				cout<<"error"<<endl;
			}
			
			helmet->setHp(health);
			this->helmet=*helmet;
			
		}
		
		void getHelmet(){
			cout<<helmet.getLevel()<<endl;
			cout<<helmet.getHp()<<endl;
		}
	;
};
		

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
	
	Gun akm;
	akm.setAmmo(45);
	akm.setDamage(67);
	akm.setScope(78);
	harsh.setGun(akm);
	harsh.setHelmet(3);
	
	Gun awm;
	awm.setAmmo(45);
	awm.setDamage(67);
	awm.setScope(78);
	chetan.setGun(awm);
	chetan.setHelmet(1);
	
	Gun gun123=harsh.getGun();
//	cout<<gun123.getDamage();
	
//	chetan.getHelmet();
//	harsh.getHelmet();


////////// aray of classes / array of objects

player p[2]={harsh,chetan};
cout<<p[0].getage();

	
	return 0;
}