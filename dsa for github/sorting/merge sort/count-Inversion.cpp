#include<iostream>
#include<vector>
using namespace std;
int c=0;
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

int count(vector<int> a, vector<int> b){
	int i=0;
	int j=0;
	int count=0;
	while(i<a.size() && j<b.size()){
		if(a[i]>b[j]){
			count+=a.size()-i;
			j++;
		}else{
			i++;
		}
	}
	
	return count;
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
	c=c+count(a,b);
	merge(a,b,v);
	a.clear();
	b.clear();
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
	
	cout<<"count: "<<c;
	
	
	return 0;
}















//int main(){
//	
//int arr[]={5,1,8,2,3};
//int n=sizeof(arr)/sizeof(arr[0]);
//
//for(int i=0;i<n;i++){
//	cout<<arr[i]<<" ";
//}	
//	
//	cout<<endl;
//	int count=0;
//	for(int i=0;i<n-1;i++){
//		for(int j=i+1;j<n;j++){
//			if(arr[i]>arr[j]){
//				count++;
//			}
//		}
//	}
//	
//	cout<<count;
//	
//	return 0;
//	
//}