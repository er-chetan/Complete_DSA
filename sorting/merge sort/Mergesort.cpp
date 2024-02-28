#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& a,vector<int>& b,vector<int>& res){
	int i=0,j=0,k=0;
	
	while(i<a.size() && j<b.size()){
		
		if(a[i]<b[j]){
			res[k++]=a[i++];
		}else{
			res[k++]=b[j++];
		}
		
		if(i==a.size()){
			while(j<b.size()){
				res[k++]=b[j++];
			}
			
		}
		
		if(j==b.size()){
			while(i<a.size()){
				res[k++]=a[i++];
			}
		}
	}
}


void mergeSort(vector<int>& v){
	
	int n=v.size();
	
	if(n==1){
		return;
	}
	
	int n1=n/2;
	int n2=n-n/2;
	vector<int> a(n1),b(n2);
	for(int i=0;i<n1;i++){
		a[i]=v[i];
	}
	for(int i=0;i<n2;i++){
		b[i]=v[i+n1];
	}
	
	mergeSort(a);
	mergeSort(b);
	merge(a,b,v);
}
int main(){
	int n;
	cout<<"enter the size of vector"<<endl;
	cin>>n;
	vector<int> v;
	cout<<"enter the element in vector"<<endl;
	for(int i=0;i<n;i++){
		int ele;
		cin>>ele;
		v.push_back(ele);
	}
	
	mergeSort(v);
	
	cout<<"after apply the merge sort"<<endl;
	
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	
	
	
	return 0;
}





















//// Merge sort in C++
//
//#include <iostream>
//using namespace std;
//
//// Merge two subarrays L and M into arr
//void merge(int arr[], int p, int q, int r) {
//  
//  // Create L ? A[p..q] and M ? A[q+1..r]
//  int n1 = q - p + 1;
//  int n2 = r - q;
//
//  int L[n1], M[n2];
//
//  for (int i = 0; i < n1; i++)
//    L[i] = arr[p + i];
//  for (int j = 0; j < n2; j++)
//    M[j] = arr[q + 1 + j];
//
//  // Maintain current index of sub-arrays and main array
//  int i, j, k;
//  i = 0;
//  j = 0;
//  k = p;
//
//  // Until we reach either end of either L or M, pick larger among
//  // elements L and M and place them in the correct position at A[p..r]
//  while (i < n1 && j < n2) {
//    if (L[i] <= M[j]) {
//      arr[k] = L[i];
//      i++;
//    } else {
//      arr[k] = M[j];
//      j++;
//    }
//    k++;
//  }
//
//  // When we run out of elements in either L or M,
//  // pick up the remaining elements and put in A[p..r]
//  while (i < n1) {
//    arr[k] = L[i];
//    i++;
//    k++;
//  }
//
//  while (j < n2) {
//    arr[k] = M[j];
//    j++;
//    k++;
//  }
//}
//
//// Divide the array into two subarrays, sort them and merge them
//void mergeSort(int arr[], int l, int r) {
//  if (l < r) {
//    // m is the point where the array is divided into two subarrays
//    int m = l + (r - l) / 2;
//
//    mergeSort(arr, l, m);
//    mergeSort(arr, m + 1, r);
//
//    // Merge the sorted subarrays
//    merge(arr, l, m, r);
//  }
//}
//
//// Print the array
//void printArray(int arr[], int size) {
//  for (int i = 0; i < size; i++)
//    cout << arr[i] << " ";
//  cout << endl;
//}
//
//// Driver program
//int main() {
//  int arr[] = {6, 5, 12, 10, 9, 1};
//  int size = sizeof(arr) / sizeof(arr[0]);
//
//  mergeSort(arr, 0, size - 1);
//
//  cout << "Sorted array: \n";
//  printArray(arr, size);
//  return 0;
//}
