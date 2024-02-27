#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	
vector <char> chars;

chars.push_back('a');
chars.push_back('a');
chars.push_back('b');
chars.push_back('b');
chars.push_back('c');
chars.push_back('c');
chars.push_back('c');
chars.push_back('c');
chars.push_back('c');
chars.push_back('c');
chars.push_back('t');

	int c=1;
        string s;
        int n=chars.size();
        if(n==1){
             cout<<n;
        }
        for(int i=0;i<n;i++){
            if(chars[i]==chars[i+1]){
                c++;
                if(i==n-1){
                	s=s+chars[i];
                	if(c>1){
                    string temp=to_string(c);
                    s=s+temp;
                }
                	break;
			}
            }else{
            	
                s=s+chars[i];
                if(c>1){
                    string temp=to_string(c);
                    s=s+temp;
                }
                c=1;
            }
        }
        
        cout<<s<<endl;;
        cout<<s.size();

 
}