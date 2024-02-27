#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

void advancelevel(vector<string>& timePoints,int n){
	
	cout<<"push back in minute vector;"<<endl;
	
	vector<int> minute; 
	char ch;
	int num1,num2,n1,n2,total,save=1440;
	int count=0;
	for(int i=0;i<n;i++){
		
		int j=0;
			
		string s=timePoints[i];
	
		if(s=="00:00"){
			total=24*60;
			minute.push_back(total);
		}else{
			ch=s[j];
			n1=(ch-'0')*10;
			ch=s[j+1];
			n2=(ch-'0');
			num1=(n1+n2)*60;
			ch=s[j+3];
			n1=(ch-'0')*10;
			ch=s[j+4];
			n2=(ch-'0');
			num2=(n1+n2);
			total=num1+num2;
			minute.push_back(total);
		}
			
		if(i>0){
			if(minute[i]<=minute[i-1]){
				minute[i]=total+count*24*60;
			}
		}
		
		
	   	if(minute[i]>=save){
	   		count++;
			save=save+1440;
		}
		
		if(i<n-1){
			string s1=timePoints[i+1];
	 
			if(s1[0]=='0' && s1[1]=='0' && s1[3]!='0' &&s1[4]!='0'){
			 	count++;
			}
			
		}
	 
		
	}
	
	cout<<"time in minutes"<<endl;
	
	for(int i=0;i<n;i++){
		cout<<minute[i]<<" ";
	}
	
	
	int v1,v2,min=INT_MAX,temp;
	for(int i=0;i<n-1;i++){
		
		temp=minute[i+1]-minute[i];
		
		if(temp==0){
			min=0;
			break;
		}
		 
		if(min>temp){
			min=temp;
		}
	}
	
	cout<<endl;
	cout<<"minimum time"<<" "<<min;
}


//////////////////////---------------------------------------/////////////////////////



void interlevel(vector<string>& timePoints,int n){
	
	cout<<"push back in minute vector;"<<endl;
	
	vector<int> minute; 
	char ch;
	int num1,num2,n1,n2,total;
	int count=0;
	for(int i=0;i<n;i++){
		
		int j=0;
			
		string s=timePoints[i];
	
		if(s=="00:00"){
			total=0;
			minute.push_back(total);
		}else{
			ch=s[j];
			n1=(ch-'0')*10;
			ch=s[j+1];
			n2=(ch-'0');
			num1=(n1+n2)*60;
			ch=s[j+3];
			n1=(ch-'0')*10;
			ch=s[j+4];
			n2=(ch-'0');
			num2=(n1+n2);
			total=num1+num2;
			minute.push_back(total);
		}
		
	 
	}
	
	cout<<"time in minutes"<<endl;
	
	for(int i=0;i<n;i++){
		cout<<minute[i]<<" ";
	}
	cout<<endl;
	
	cout<<"after sorting a minute"<<endl;
	sort(minute.begin(),minute.end());
	for(int i=0;i<n;i++){
		cout<<minute[i]<<" ";
	}
	
	
	int v1,v2,mini=INT_MAX,temp;
	for(int i=0;i<n-1;i++){
		
		temp=minute[i+1]-minute[i];
		
		if(temp==0){
			mini=0;
			break;
		}
		
		if(mini>temp){
			mini=temp;
		}
	}
	
	int res=1440+minute[0]-minute[n-1];
	
	int minimum=min(res,mini);
	cout<<minimum;
	
//	cout<<endl;
//	cout<<"minimum time"<<" "<<min;
}

int main(){
	
	int n;
	cout<<"enter the size of an string"<<endl;
	cin>>n;
	
	vector<string>timePoints; 
	
	cout<<"enter the time"<<endl;
	for(int i=0;i<n;i++){
		string ele;
		cin>>ele;
		timePoints.push_back(ele);
	}
	
//	advancelevel(timePoints,n);
	interlevel(timePoints,n);
	
	
	return 0;
}