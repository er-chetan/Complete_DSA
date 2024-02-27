#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
	
//	for(int i=0;i<v.size();i++){
//		cout<<v[i]<<endl;
//	}
//	v.pop_back();
//	cout<<"after"<<endl;
//	for(int i=0;i<v.size();i++){
//		cout<<v[i]<<endl;
//	}
//	return 0;
//cout<<"size"<<" "<<v.size()<<endl;
//cout<<"capacity"<<" "<<v.capacity()<<endl;
//
//
//vector<int> v1(3);
////	
////	v1[0]=1;
////	v1[1]=2;
////	v1[2]=3;
////	v1.push_back(4);
////	cout<<"size"<<" "<<v1.size()<<endl;
////	cout<<"capacity"<<" "<<v1.capacity();
//	
////	int x=4;
////	int pl=x%10;
////	cout<<pl; 
////	
//
//
//vector<string> strs;
////	strs = ["eat","tea","tan","ate","nat","bat"]
//
//for(int i=0;i<6;i++){
//	string s;
//	cin>>s;
//	strs.push_back(s);
//}
//cout<<endl;
//for(int i=0;i<6;i++){
//	 cout<<strs[i]<<" ";
//}
//
////sort(strs.begin(),strs.end());
//
//
//for(int i=0;i<6;i++){
//	sort(strs[i].begin(),strs[i].end());
//}
//
//sort(strs.begin(),strs.end());
//
//cout<<endl;
//for(int i=0;i<6;i++){
//	 cout<<strs[i]<<" ";
//}


//vector <char> chars;
//
//chars.push_back('a');
//chars.push_back('a');
//chars.push_back('b');
//chars.push_back('b');
//chars.push_back('c');
//chars.push_back('c');
//chars.push_back('c');
//chars.push_back('c');
//chars.push_back('c');
//chars.push_back('c');
//chars.push_back('t');
//	int c=1;
//        string s;
//        int n=chars.size();
//        if(n==1){
//             cout<<n;
//        }
//        for(int i=0;i<n;i++){
//            if(chars[i]==chars[i+1]){
//                c++;
//                if(i==n-1){
//                	s=s+chars[i];
//                	if(c>1){
//                    string temp=to_string(c);
//                    s=s+temp;
//                }
//                	break;
//			}
//            }else{
//            	
//                s=s+chars[i];
//                if(c>1){
//                    string temp=to_string(c);
//                    s=s+temp;
//                }
//                c=1;
//            }
//        }
//        
//        cout<<s<<endl;;
//        cout<<s.size();

int n=2;

int arr[n][n];

arr[0][0]=1;
arr[0][1]=1;
arr[1][0]=1;
arr[1][1]=1;

if(arr[1][0-1]==1){
	cout<<"yes";
}else{
	cout<<"no";
}
        
}