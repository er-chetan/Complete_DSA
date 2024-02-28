#include<iostream>
#include<vector>
using namespace std;

//Ques : Create a class "cricketer that contains name of cricketer, his age, number of test matches 
//that he has played and the average runs that he has scored in each test match. 
//Create an array of data type "cricketer" to hold records of 20 such cricketers and 
//then write a program to read these records

class cricketer{
	public:
	string name;
	int age;
	int no_of_tmatch;
	int avg;
	// set the values
	void setName(string name){
		this->name=name;
	}
	void setAge(int age){
		this->age=age;
	}
	void setMatch(int nmatch){
		this->no_of_tmatch=nmatch;
	}
	void setAvg(int avg){
		this->avg=avg;
	}
	
	// get the values
	
	string getName(){
		return name;
	}
	int getAge(){
		return age;
	}
	int getMatch(){
		return no_of_tmatch;
	}
	int getAvg(){
		return avg;
	}
	
};

int main(){
	vector<cricketer> cricket;
	cout<<"how many cricketer you want to store";
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cricketer *c=new cricketer;
		cout<<"enter the name of the cricketer"<<endl;
		string name;
		cin>>name;
		int age,avg,nmatch;
		cout<<"enter the age , avg , no.of matches"<<endl;
		cin>>age>>avg>>nmatch;
		
		c->setName(name);
		c->setAge(age);
		c->setAvg(avg);
		c->setMatch(nmatch);
		cricket.push_back(*c);
		
	}
	
	for(int i=0;i<n;i++){
		
		cout<<cricket[i].getName()<<" ";
		cout<<cricket[i].getAge()<<" ";
		cout<<cricket[i].getAvg()<<" ";
		cout<<cricket[i].getMatch();
		cout<<endl;
		
	}
	
	return 0;
}

