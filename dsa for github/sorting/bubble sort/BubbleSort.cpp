#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int m,i,j,temp=0;
	
	cout<<"enter the no.of element"<<endl;
	cin>>m;
	
	int a[m];
	
	cout<<"enter the element"<<endl;
	
	for(i=0;i<m;i++){
		cin>>a[i];
	}

	//Bubble Sort
	
	for(i=0;i<m-1;i++){
		bool find=true;
		for(j=0;j<m-1-i;j++){// optimized the code
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				find=false;
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
