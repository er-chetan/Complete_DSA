#include<iostream>
using namespace std;
int main(){
int arr[5];
int*arr1[5];
cout<<"enter the element"<<endl;
for(int i=0;i<5;i++){
cin>>arr[i];
}
for(int i=0;i<5;i++){
arr1[i]=&arr[i];
}
cout<<"pointer"<<endl;
for(int i=0;i<5;i++){
cout<<*arr1[i]<<endl;
}
}
