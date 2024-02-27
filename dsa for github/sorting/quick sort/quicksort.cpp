#include<iostream>
using namespace std;

int partition(int arr[],int si,int ei){
	int pivotElement=arr[si];//(si+ei)/2
	int count=0;
	for(int i=si+1;i<=ei;i++){//i=si  ---------in case of randomized quicksort
//		if(i==(si+ei)/2){
//			continue;
//		}
		if(pivotElement>=arr[i]){
			count++;
		}
	}
	
	int pivotIndex=count+si;
	swap(arr[si],arr[pivotIndex]);//arr[(si+ei)/2]
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


void quicksort(int arr[],int si,int ei){
	if(si>=ei){
		return ;
	}
	
	int pi= partition(arr,si,ei);
	
	quicksort(arr,si,pi-1);
	quicksort(arr,pi+1,ei);
}

int main(){
	int n;
	cout<<"enter the size of an array"<<endl;
	cin>>n;
	
	int arr[n];
	cout<<"enter the element in an array"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	quicksort(arr,0,n-1);
	
	cout<<"after applying the quicksort"<<endl;
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}


////////////----------------- another way ---------------///////////




//void swap(int arr[] , int pos1, int pos2){
//	int temp;
//	temp = arr[pos1];
//	arr[pos1] = arr[pos2];
//	arr[pos2] = temp;
//}
//
//int partition(int arr[], int low, int high, int pivot){
//	int i = low;
//	int j = low;
//	while( i <= high){
//		if(arr[i] > pivot){
//			i++;
//		}
//		else{
//			swap(arr,i,j);
//			i++;
//			j++;
//		}
//	}
//	return j-1;
//}
//
//void quickSort(int arr[], int low, int high){
//	if(low < high){
//	int pivot = arr[high];
//	int pos = partition(arr, low, high, pivot);
//	
//	quickSort(arr, low, pos-1);
//	quickSort(arr, pos+1, high);
//	}
//}
//
//int main()
//{
//	int n ;
//	cout << " enter the size of array";
//	cin>>n;
//	int arr[n];
//	for( int i = 0 ; i < n; i++){
//		cin>> arr[i];
//	}
//	quickSort(arr, 0 , n-1);
//	cout<<"The sorted array is: ";
//	for( int i = 0 ; i < n; i++){
//		cout<< arr[i]<<"\t";
//	}
//	
//}
