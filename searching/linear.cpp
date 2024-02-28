#include <iostream>
using namespace std;
class Searching{
int array[4]={1,45,78,80};
int r;
public:
void display(void);
};
void Searching::display(void){

 
cout<<"array"<<endl;
for(int i=0;i<4;i++){
	cout<<array[i]<<" ";
}
cout<<"enter the number which you find"<<endl;
cin>>r;
cout<<endl;
for(int i=0;i<4;i++){
	if(array[i]==r){
	cout<<"index is"<<" "<<i;
	}
}
}
int main(){
    Searching s;
	s.display();                         
}
