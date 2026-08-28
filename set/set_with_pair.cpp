#include<iostream>
#include<set>
#include<vector>
#include<utility>
using namespace std;

int main(){

    vector<vector<string>> v={
        {"chetan", "kumar"},
        {"vishal", "kumar"}
        {"rahul", "kumar"},
        {"vishal", "singh"}
    };

    set<pair<string,string>> s;
    for(int i=0;i<v.size();i++){
        s.insert({v[i][0],v[i][1]});
    }

    for(auto ele:s){
        cout<<ele.first<<" "<<ele.second<<endl;
    }

    if(s.find({"vishal","kumar"})!=s.end()){
        cout<<"found"<<endl;
        cout<<"vishal"<<" "<<"kumar"<<endl;
    }
}
