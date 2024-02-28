#include<iostream>
#include<string>
#include<algorithm>
using namespace std;



int main(){
	//question : input even number of the string and reverse from half of th index/string;
//	string str="abcdefgh";//even number string
//	int size=str.length()/2;
//	
//	reverse(str.begin(),str.begin()+size);
//	
//	cout<<str<<endl;
	
	//question : input greator than 5 length string and reverse from 2 to 5th index using builtin-function;
	
//	string s;
//	cout<<"enter the string"<<endl;
//	getline(cin,s);
//	
//	int l=s.size();
//	
//	if(l>=5){
//		reverse(s.begin()+1,s.begin()+5);
//		cout<<s<<endl;
//	}else{
//		cout<<"length of the string is less than 5"<<endl;
//	}	
	

// question - in number count the no.of digit;

int x=12345;
string s = to_string(x);

int len=s.size();
cout<<"length of the number"<<" "<<len;
	
	
	return 0;
}






