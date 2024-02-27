#include<iostream>
using namespace std;

void product(int *p1,int* p2){
	int multiply;
	multiply=*p1 * *p2;
	cout<<multiply;
}

int main(){
	int n,m;
	cout<<"enter the two number"<<endl;
	cin>>n>>m;
	int* p1=&n;
	int* p2=&m;
	cout<<"product";
	product(p1,p2);


}