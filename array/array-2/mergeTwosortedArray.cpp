#include<iostream>
#include<vector>
using namespace std;
vector <int> merge(vector <int>& nums1,vector <int>& nums2){
	int m=nums1.size();
    int n=nums2.size();
    int i=0,j=0,k=0;
    
    vector <int> nums3(m+n);
        while(i<m && j<n){
            if(nums1[i]>nums2[j]){
                nums3[k]=nums2[j];
                j++;
            }else{
                nums3[k]=nums1[i];
                i++;
            }
            k++;
        }

        if(i==m){
            while(j<n){
                nums3[k]=nums2[j];
                j++;
                k++;
            }
        }else if(j==n){
            while(i<m){
                nums3[k]=nums2[i];
                i++;
                k++;
            }
        }
	return nums3;
}
int main(){
	int n;
	cout<<"enter the size of first vector"<<endl;
	cin>>n;
	int m;
	cout<<"enter the size of second vector"<<endl;
	cin>>m;
	
	vector <int> v1(n);
	vector <int> v2(m);
	
	cout<<"enter the elements of the first vector"<<endl;
	for(int i=0;i<n;i++){
		cin>>v1[i];
	}
	cout<<"enter the elements of the second vector"<<endl;
	
	for(int i=0;i<m;i++){
		cin>>v2[i];
	}
	
	vector <int> v3=merge(v1,v2);
	cout<<"enter the array after merging"<<endl;
	for(int i=0;i<m+n;i++){
		cout<<v3[i]<<" ";
	}
}



