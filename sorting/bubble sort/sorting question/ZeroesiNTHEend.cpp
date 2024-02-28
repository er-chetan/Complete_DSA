#include<iostream>
#include<algorithm>
#include<conio.h>
using namespace std;

int main(){
	
	int i,j,temp;
	
	int a[]={5,0,1,2,5,0,6,3,0,0,4,0,3,0};
	
	int m=13;
	 
	
	//importance of Bubble Sort
	
	for(i=0;i<m-1;i++){
		bool find=true;
		for(j=0;j<m-1-i;j++){ //optimized the code
			if(a[j]==0){
				if(0<a[j+1]){
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
					find=false;
				}
			}
			
		}
		if(find==true){ //more optimized the code
			break;
		}
	}
	
	cout<<"array after sorting"<<endl;
	for(i=0;i<m;i++){
		cout<<a[i]<<" ";
	}	

}
