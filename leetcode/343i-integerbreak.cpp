#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	
	int n;
	cout<<"enter the number"<<endl;
	cin>>n;	
	
	if(n == 2 || n == 3) return n-1;

        int res = 1;
        while(n > 4){
            n -= 3;
            res *= 3;
            cout<<"n--->"<<n<<" "<<"res--->"<<res<<endl;
        }

    cout<<"maximum product------->"<<n * res;
	
 
	 
	
	return 0;	
}