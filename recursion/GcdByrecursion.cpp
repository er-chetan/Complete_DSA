#include<iostream>
#include<algorithm>
using namespace std;
 

int gcd(int a ,int b){
	
	for(int i=min(a,b);i>=2;i--){
		if(a%i==0 && b%i==0){
			return i;
		}
	}
	return 1;
}

int gcdByRecursion(int a,int b){
	if(a==0){
		return b;
	}else{	
		return gcdByRecursion(b%a,a);
	}
}
int main(){
	int a=80,b=12;
	cout<<"hcl by without recursion"<<" "<<gcd(a,b)<<endl;
	cout<<"hcl by with recursion"<<" "<<gcdByRecursion(a,b);
}