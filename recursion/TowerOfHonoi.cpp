#include<iostream>
using namespace std;

void TowerOfHonoi(int n,char a ,char b,char c){//source=s helper=h destination=d
	if(n==0){
		return ;
	}
	TowerOfHonoi(n-1,a,c,b);//start
	cout<<a<<"-->"<<c<<endl;
	TowerOfHonoi(n-1,b,a,c);//end
	
}

int main(){
	TowerOfHonoi(3,'A','B','C');//no. of disk is 3
	cout<<endl;
}