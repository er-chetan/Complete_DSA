#include<iostream>
using namespace std;

int maze(int sr,int sc,int er,int ec){
	if(sr>er || sc>ec){
		return 0;
	}
	
	if(sr==er && sc==er){
		return 1;
	}
	
	int right=maze(sr,sc+1,er,ec);
	int left=maze(sr+1,sc,er,ec);
	return right+left;
}


void printWays(int sr,int sc,int er,int ec,string s){
	if(sr>er || sc>ec){
		return ;
	}
	
	if(sr==er && sc==er){
		cout<<s<<endl;;
	}
	
	printWays(sr,sc+1,er,ec,s+"R");
	printWays(sr+1,sc,er,ec,s+"D");
}


int maze2(int right ,int down){
	if(right<1 || down<1){
		return 0;
	}
	
	if(right==1 && down==1){
		return 1;
	}
	
	int rightway=maze2(right,down-1);
	int downway=maze2(right-1,down);
	
	return rightway+downway;
}

void printways2(int right ,int down,string s){
	if(right<1 || down<1){
		return ;
	}
	
	if(right==1 && down==1){
		cout<<s<<endl;
	}
	
	printways2(right,down-1,s+"R");
	printways2(right-1,down,s+"D");
	
	 
}
int main(){
	int startrow,startcol,endrow,endcol;
	cout<<"enter the starting row : ";
	cin>>startrow;
	cout<<"enter the starting col : ";
	cin>>startcol;
	cout<<"enter the ending row : ";
	cin>>endrow;
	cout<<"enter the ending col : ";
	cin>>endcol;
	
	cout<<"number of ways :"<<" "<<maze(startrow,startcol,endrow,endcol)<<endl;
	cout<<"print the ways : "<<endl;
	printWays(startrow,startcol,endrow,endcol,"");
	
	cout<<"number of ways from second method : "<<maze2(endrow,endcol)<<endl;
	cout<<"print ways from second method"<<endl;
	printways2(endrow,endcol,"");
	return 0;
}