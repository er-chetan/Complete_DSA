#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	
	int n,m;
	cout<<"enter the size of vector 1"<<endl;
	cin>>n;	
	cout<<"enter the size of vector 2"<<endl;
	cin>>m;
	
 
	vector<int> a(n,0);
	cout<<"enter the element in vector 1"<<endl;
	
	for(int i=0;i<n;i++){
		int ele;
		cin>>ele;
		a[i]=ele;
	}
	
	vector<int> b(m,0);
	cout<<"enter the element in vector 2"<<endl;
	
	for(int i=0;i<m;i++){
		int ele;
		cin>>ele;
		b[i]=ele;
	}

	
		
	return 0;
}


//------------------> TLE <------------------- all the test case is run but TLE//
	
//	int sum1=0,sum2=0;
//	bool find=false;
//	
//	for(int i=0;i<a.size();i++){
//		sum1=sum1+a[i];
//	}
//	cout<<"sum of first array: "<<sum1<<endl;
//	
//	for(int i=0;i<b.size();i++){
//		sum2=sum2+b[i];
//	}
//	cout<<"sum of second array: "<<sum2<<endl;
//	
//	int diff1,diff2,idx1,idx2;
//	for(int i=0;i<a.size();i++){
//		for(int j=0;j<b.size();j++){
//			diff1=sum1-a[i]+b[j];
//			diff2=sum2-b[j]+a[i];
//			if(diff1==diff2){
//				idx1=a[i];
//				idx2=b[j];
//				find=true;
//				break;
//			}
//		}
//		if(find==true){
//			break;
//		}
//	}
//	
//	cout<<idx1<<" "<<idx2;