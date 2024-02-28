#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


//// its worst algorithm   ///////
int main(){
	
	int n;
	cout<<"enter the size of vector"<<endl;
	cin>>n;
	vector<int>score(n,0);
	cout<<"vector---:"<<endl;
	
	for(int i=0;i<n;i++){
		int ele;
		cin>>ele;
		score[i]=ele;
	}
 vector<int> v(n,0);
        
    for(int i=0;i<n;i++){
        v[i]=score[i];
    }
        
    sort(v.begin(),v.end());
        
    vector<string>str(n," ");
    for(int i=n-1;i>=0;i--){
        int j=0;
        while(j<n){
            if(i==n-1){
                if(v[i]==score[j]){
                    str[j]="Gold Medal";
                }
            }else if(i==n-2){
                if(v[i]==score[j]){
                    str[j]="Silver Medal";
                }
            }else if(i==n-3){
                if(v[i]==score[j]){
                    str[j]="Bronze Medal";
                }
            }else {
                if(v[i]==score[j]){
                    int idx=n-i;
                    string str1=to_string(idx);
                    str[j]=str1;
            	}
            }
       		j++;
        
            }
        }
	
	
	cout<<"print------ string vector"<<endl;
	
	
	for(int i=0;i<n;i++){
		cout<<str[i]<<" ";
	}
	
	return 0;
}