#include<iostream>
using namespace std;

class Student{
	public:
		string name;
		int rno;
		int marks;
		
		Student(string name,int rno,int marks){
			this->name=name;
			this->rno=rno;
			this->marks=marks;
		}
	
};

//void change(Student &s){// pass this Student* s
//	s.name="chetan";// (*s).name or s->name
//}


void change2(Student* s){
	s->name="chetan";
}

int main(){
	
	//// first way to change the values ///// 
//	Student s("raghav",2,56);
//	cout<<s.name<<endl;
//	change(s);
//	cout<<s.name;
	
	//// second way to change the values ///// 
	
	Student* s= new Student("raghav",5,67);
	cout<<s->name<<endl;
	change2(s);
	cout<<s->name<<endl;
	
	
	
	
	return 0;
}