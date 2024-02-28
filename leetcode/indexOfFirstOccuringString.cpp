#include<iostream>
using namespace std;
int main(){
	
	string haystack="hello";
	string needle="ll";
	
	 	int n=needle.size();
        int h=haystack.size();
        bool find=false;
        int idx;
        
        
        for(int i=0;i<h;i++){
            int j=0;
            int k=i;
			cout<<"j="<<j<<" "<<"k="<<k<<" "<<n<<endl;
            while(j<n){
                if(haystack[k]==needle[j]){
                    find=true;
                    cout<<haystack[k]<<"==="<<needle[j]<<"--->"<<find<<"--->"<<endl;
                }else{
                    find=false;
                    break;
                }
                j++;
                k++;
                
            }
			cout<<find<<"<---"<<endl;
            if(find==true){
                idx=i;
                break;
            }
            
        }
        
        if(find==true){
        	cout<<idx;
		}else{
			cout<<"false";
		}
		
	return 0;
}