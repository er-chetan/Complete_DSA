#include<iostream>
#include<conio.h>
#include<algorithm>
using namespace std;

int main(){
	int arr[50],N,index;
	int small ,pos ,temp,j;
	
	cout<<"enter the no.of element"<<endl;
	cin>>N;
	
	cout<<"enter the element"<<endl;
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	
	cout<<"\ninput Done\n";
	for(int i=0;i<N;i++){//n-1
		small=arr[i];//INT_MAX
		pos=i;//-1
		 
		
		for( j=i+1;j<N;j++){//j=i
			if(arr[j]<small){
				small=arr[j];
				pos=j;
			}
		}
		
	 
		temp=arr[i];
		arr[i]=arr[pos];
		arr[pos]=temp;
		cout<<"\nArray after pass-"<<i+1<<"-is"<<" ";
		
		for(j=0;j<N;j++){
			cout<<arr[j]<<" ";
		}
		
		
	}
	
	cout<<"\nthe sorted array"<<endl;
	
	for(int i=0;i<N;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}

