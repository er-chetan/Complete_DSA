#include<iostream>
#include<vector>
#include<list>
using namespace std;

vector<list<int>> graph;
int v;
void add_edge(int src,int dest,bool bi_dir=true){
	graph[src].push_back(dest);
	if(bi_dir){
		graph[dest].push_back(src);
	}
}

void display(){
	for(int i=0;i<graph.size();i++){
		cout<<i<<" -> ";
		for(auto ele : graph[i]){
			cout<<ele<<" ";
		}
		cout<<endl;
	}

}

int main(){
	cout<<"enter the number vertex"<<endl;
	cin>>v;
	graph.resize(v,list<int>());
	cout<<"enter the number of edge"<<endl;
	int e;
	cin>>e;
	cout<<"enter all the possible souce to destination"<<endl;
	while(e--){
		int s,d;
		cin>>s>>d;
		add_edge(s,d);
	}
	display();	
	
	return 0;
}
