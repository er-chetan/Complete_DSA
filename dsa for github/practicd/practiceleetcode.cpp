#include<iostream>
#include<algorithm>
using namespace std;


void merge(int Larr[],int n1,int Rarr[],int n2, int res[],int n){
	
	int i=0;
	int j=0;
	int k=0;
	while(i<n1 && j<n2){
		if(Larr[i]<=Rarr[j]){
			res[k++]=Larr[i++];
		}else{
			res[k++]=Rarr[j++];
		}
		if(i==n1){
			while(j<n2){
				res[k++]=Rarr[j++];
			}
		}
		if(j==n2){
			while(i<n1){
				res[k++]=Larr[i++];
			}
		}
	}
	cout<<"in merge";
	for(int i=0;i<n;i++){
		cout<<res[i]<<" ";
	}
	cout<<endl;
}	

void mergesort(int arr[],int n){
	if(n==1){
		return;
	}
	int n1=n/2;
	int n2=n-n/2;
	int Larr[n1];
	int Rarr[n2];
	
	for(int i=0;i<n1;i++){
		Larr[i]=arr[i];
	}
	
	for(int i=0;i<n2;i++){
		Rarr[i]=arr[i+n1];
	}
	
	mergesort(Larr,n1);
	mergesort(Rarr,n2);
	merge(Larr,n1,Rarr,n2,arr,n);   
}

int partition(int arr[],int si,int ei){
	int pivotele=arr[si];
	int count=0;
	for(int i=si+1;i<=ei;i++){
		if(pivotele>=arr[i]){
			count++;
		}
	}
	int pivotidx=count+si;
	swap(arr[si],arr[pivotidx]);
	int i=si;
	int j=ei;
	
	while(i<pivotidx && j>pivotidx){
		if(arr[i]<=pivotele){
			i++;
		}else if(arr[j]>pivotele){
			j--;
		}else if(arr[i]>pivotele && arr[j]<=pivotele){
			swap(arr[i],arr[j]);
			i++;
			j--;
		}
	}
	cout<<"in partion function:";
	for(int i=si;i<=ei;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	
	return pivotidx;
}

void quicksort(int arr[],int si,int ei){
	if(si>=ei){
		return;
	}
	int p=partition(arr,si,ei);
	quicksort(arr,si,p-1);
	quicksort(arr,p+1,ei);
}

int main(){

	int arr[]={5,3,2,1,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"array : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	cout<<"after sorting : ";
	// bubble sort 
//	for(int i=0;i<n-1;i++){
//		bool find=true;
//		for(int j=0;j<n-i-1;j++){
//			if(arr[j]>arr[j+1]){
//				int temp=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=temp;
//				find=false;
//			}
//		}
//		if(find==true){
//			break;
//		}
//	}

/// selection sort

//	for(int i=0;i<n-1;i++){
//		int min=INT_MAX;
//		int minidx=-1;
//		for(int j=i;j<n-1;j++){
//			if(arr[j]<min){
//				min=arr[j];
//				minidx=j;
//			}
//		}
//		swap(arr[i],arr[minidx]);
//	}

// insertion sort

//	for(int i=1;i<n;i++){
//		int j=i;
//		while(j>=1 && arr[j]<arr[j-1]){
//			swap(arr[j],arr[j-1]);
//			j--;
//		}
//	}

/// merge sort
	
//	mergesort(arr,n);

// quick sort 

	quicksort(arr,0,n-1);


	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}