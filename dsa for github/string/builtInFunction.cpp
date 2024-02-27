#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
//	string str="chetan is an engineer";
//	cout<<"length of the string"<<endl;
//	cout<<str.size()<<endl;
//	cout<<str.length()<<endl;
//	
//	//push_back
//	string s="abcde";
//	cout<<"push_back funtion:"<<endl;
//	s.push_back('f');
//	s.push_back('g');
//	cout<<s<<endl;
//	
//	//pop_back
//	s.pop_back();
//	cout<<"after popback :"<<endl;
//	cout<<s<<endl;
//	
//	
//	//+operator
//	string t="chetan";
//	s=s+t;
//	cout<<"after plus operator"<<endl;
//	cout<<s<<endl;
//	
//	
//	//reverse
//	string r="abcdefgh";//index a b c d e f g h
////								0 1 2 3 4 5 6 7 
//	cout<<"reverse :"<<r<<endl;
//	reverse(r.begin(),r.end());
//	cout<<"after reverse:"<<r<<endl;
//	
//	
//	///index reversing

//	string substring="abcdefgh";
//	cout<<"orginal string"<<" "<<substring<<endl;
//	cout<<"some substring are reverse"<<endl;
//	reverse(substring.begin()+2,substring.begin()+5);
//	cout<<"some substring are reverse AFTER"<<" "<<substring<<endl;
//	reverse(substring.begin()+2,substring.begin()+8);//.end()
//	cout<<substring;
	
	
	
	//sort the string according to the ascii value of charcters\
	
	string s;
	getline(cin,s);
	sort(s.begin(),s.end());
	cout<<s;
			
	
}









