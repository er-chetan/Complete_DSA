#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	string s="Let's take LeetCode contest";
    int i=0,prevspace=0;
        while(i<s.size()){
        	
        	
            if(s[i]==' '){
            	int n=s.size()-i;
				reverse(s.begin()+prevspace,s.end()-n);
                prevspace=i+1;

            }
            i++;
            if(i==s.size()-1){
        		reverse(s.begin()+prevspace,s.end());
			}
        }
        
        cout<<s;
    return 0;   
}