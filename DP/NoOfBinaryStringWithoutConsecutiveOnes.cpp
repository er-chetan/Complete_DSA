#include<iostream>
#include<vector>
using namespace std;

// Question : find the number of binary string of length n without consecutive one  

int count=0;
int WithoutConsecutiveOnes(int n){
	if(n==1) return 2;
	if(n==2) return 3;
	return count+WithoutConsecutiveOnes(n-1)+WithoutConsecutiveOnes(n-2);
}


int main(){
	
	cout<<"ans = "<<WithoutConsecutiveOnes(4);	
	
	return 0;
}