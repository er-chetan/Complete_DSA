#include<iostream>
using namespace std;

int partition(int arr[],int si,int ei){
	int pivotElement=arr[(si+ei)/2];
	int count=0;
	for(int i=si;i<=ei;i++){
		if(i==(si+ei)/2){
			continue;
		}
		if(pivotElement>=arr[i]){
			count++;
		}
	}
	
	int pivotIndex=count+si;
	swap(arr[(si+ei)/2],arr[pivotIndex]);
	int i=si;
	int j=ei;
	while(i<pivotIndex && j>pivotIndex){
		if(arr[i]<=pivotElement){
			i++;
		}else if(arr[j]>pivotElement){
			j--;
		}else if(arr[i]>pivotElement && arr[j]<=pivotElement){
			swap(arr[i],arr[j]);
			i++;
			j--;
		}
	}
	return pivotIndex;
}


int quicksort(int arr[],int si,int ei,int ti){
	
	int pi= partition(arr,si,ei);
	if(pi+1==ti){
		return arr[pi];
	}
	if(ti<pi){
		return quicksort(arr,si,pi-1,ti);
	}else{	
		return quicksort(arr,pi+1,ei,ti);
	}

}

int main(){
	int n;
	cout<<"enter the size of an array"<<endl;
	cin>>n;
	int targetIndex=4;
	int arr[n];
	cout<<"enter the element in an array"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int res=quicksort(arr,0,n-1,targetIndex);
	
	cout<<"target index"<<" "<<res<<endl;
	 
	
	return 0;
}
