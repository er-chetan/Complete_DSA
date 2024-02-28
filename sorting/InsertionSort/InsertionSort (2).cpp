#include<iostream>
#include<conio.h>
#include<limits.h>
#include<algorithm>
using namespace std;
//	void InsSort(int AR[],int size){
//		int temp,j;
//		AR[0]=INT_MIN;
//		
//		for(int i=1;i<=size;i++){
//			temp=AR[i];
//			j=i-1;
//			
//		while(temp<AR[j]){
//			AR[j+1]=AR[j];
//			j--;
//		}
//		AR[j+1]=temp;
//		
//		cout<<"Array after pass -"<<i<<"-is:";
//		for(int k=1;k<size+1;k++){
//			cout<<AR[k]<<" ";
//			cout<<endl;
//			}
//		}
//	}

void InsSort(int AR[],int N){
	for(int i=1;i<N;i++){
		int j=i;
		while(j>=1 && AR[j]<AR[j-1]){
			swap(AR[j],AR[j-1]);//this is good way
			j--;
		}
	}
}
	int main(){
		int AR[50],N;
		cout<<"enter the no.of element ";
		
		cin>>N;
		
		cout<<"\nENTER THE ELEMENT"<<endl;
		
		for(int i=0;i<N;i++){
			cin>>AR[i];
		}
		InsSort(AR,N);
		
		cout<<"array after sorting"<<endl;
		
		for(int i=0;i<N;i++){
			cout<<AR[i]<<" ";
		}
	}
	
