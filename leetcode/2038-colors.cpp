#include<iostream>
using namespace std;
int main(){
	string colors ="AA";
	bool find=false;
	int j=1,k=1,count1=0,count2=0;
	
	for(int i=1;i<colors.size()-1;i++){
		
		///------ALICE-------//
		while(k<colors.size()-1){
			if(colors[k-1]==colors[k] && colors[k]==colors[k+1] && colors[k]=='A' && colors[k-1]=='A' && colors[k+1]=='A'){
				cout<<colors[k-1]<<" "<<colors[k]<<" "<<colors[k+1]<<endl;
				count1++;
				break;
			}
			k++; 
		}
		k=k+1;
		
		
		//--------BOB--------//
		
		while(j<colors.size()-1){
			if(colors[j-1]==colors[j] && colors[j]==colors[j+1] && colors[j]=='B' && colors[j-1]=='B' && colors[j+1]=='B'){
				count2++;
				break;
			}
			j++; 
		}
		j=j+1;
		
	
		if(count1>count2){
			cout<<"1---->"<<count1<<endl;
			find=true;
			break;
		}else if(count1<count2){
			cout<<"2---->"<<count2<<endl;
			cout<<count2<<endl;
			find=false;
			break;
		}
		
	}
	
	cout<<find;
	return 0;
}




//bool winnerOfGame(string colors) {
//        int n = colors.length();
//        int aliceWins = 0, bobWins = 0;
//        
//        // Count the number of consecutive 'A's and 'B's.
//        for (int i = 1; i < n - 1; ++i) {
//            if (colors[i - 1] == 'A' && colors[i] == 'A' && colors[i + 1] == 'A') {
//                aliceWins++;
//            } else if (colors[i - 1] == 'B' && colors[i] == 'B' && colors[i + 1] == 'B') {
//                bobWins++;
//            }
//        }
//        
//        // Alice starts, so if she has more opportunities to remove 'A', she wins.
//        if (aliceWins > bobWins) {
//            return true;
//        }
//        
//        return false;
//    }