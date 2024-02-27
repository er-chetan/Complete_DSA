#include<iostream>
using namespace std;

void pip(int n){
	if(n==0){
		return ;
	}
	
	cout<<"PRE  :  "<<n<<endl;
	pip(n-1);
	cout<<"IN   :  "<<n<<endl;
	pip(n-1);
	cout<<"POST :  "<<n<<endl;
	
}

int main(){
	pip(3);
	cout<<endl;
}