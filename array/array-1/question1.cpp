

#include<iostream>
using namespace std;

int main(){
	int arr[]={1,45,6,2,6,34,80};
	int multi=1;
	
	int size=sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0;i<size;i++){
		multi=multi*arr[i];
	}
	
	cout<<multi<<endl;
}