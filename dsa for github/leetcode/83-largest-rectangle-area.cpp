#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int nsi[n];
        nsi[n-1]=n;
        
        stack<int> st;
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
            while(st.size()>0 && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(st.size()==0){
                nsi[i]=n;
            }else{
                nsi[i]=st.top();
            }
            st.push(i);
        }

        int psi[n];
        psi[0]=-1;
        
        stack<int> gt;
        gt.push(0);
        for(int i=1;i<n;i++){
            while(gt.size()>0 && heights[gt.top()]>=heights[i]){
                gt.pop();
            }
            if(gt.size()==0){
                psi[i]=-1;
            }else{
                psi[i]=gt.top();
            }
            gt.push(i);
        }

        int maxarea=INT_MIN;
        for(int i=0;i<n;i++){
            int area=heights[i]*(nsi[i]-psi[i]-1);
            maxarea=max(maxarea,area);
	    }

    return maxarea;
}

int previous(vector<int> v,int idx){
	for(int i=idx-1;i>=0;i--){
		if(v[idx]>v[i]){
			return i;
		}
	}
	return -1;
}

int next(vector<int> v,int idx){
	int n=v.size();
	for(int i=idx+1;i<n;i++){
		if(v[idx]>v[i]){
			return i;
		}
	}
	return n;
}
    
int main(){
	
	vector<int> v;
	v.push_back(2);
	v.push_back(1);
	v.push_back(5);
	v.push_back(6);
	v.push_back(2);
	v.push_back(3);
	
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
//	int result=largestRectangleArea(v);
//	cout<<result;
	
	
	/// second method without stack
	
	int maxarea=-1;
	int pre,nex;
	for(int i=0;i<v.size();i++){
		pre=previous(v,i);
		nex=next(v,i);
		int area=v[i]*(nex-pre-1);
		cout<<"nex = "<<nex<<" "<<"pre = "<<pre<<" "<<"area = "<<area<<endl;
		if(maxarea<area){
			maxarea=area;
		}
	}
	
	cout<<"max area"<<" "<<maxarea;
	
	return 0;
}    