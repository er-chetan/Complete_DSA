#include<iostream>
using namespace std;
 ////by recursion
int bottles(int totalbottles,int d, int count,int nondrink){
	 
	if(totalbottles==d){
		count++;
		return count;
	}
	
	if(totalbottles<d){
		return count;
	}
	 
	if(totalbottles%d==0){
		totalbottles=totalbottles/d;
		count=count+totalbottles;
		return bottles(totalbottles,d,count,nondrink);
	}else{
		int nondrink=totalbottles%d;
		int drink=(totalbottles-nondrink);
		int exchange=drink/d;
		totalbottles=exchange+nondrink;
		count=count+exchange;
		return bottles(totalbottles,d,count,nondrink);
	}
	 
}
int main(){
//	int res =bottles(19,4,19,0);	
//	cout<<res;
	int totalbottles=19,d=4,nondrink,drink,exchange,count=19;
	 
	 while(totalbottles>=d){
	 	
	 	if(totalbottles==d){
			count++;
			break;
		}
		
		if(totalbottles<d){
			break;
		}
		 
		if(totalbottles%d==0){
			totalbottles=totalbottles/d;
			count=count+totalbottles;
		}else{
			nondrink=totalbottles%d;
			drink=(totalbottles-nondrink);
			exchange=drink/d;
			totalbottles=exchange+nondrink;
			count=count+exchange;
		}
	}

	cout<<count;


	return 0;
}