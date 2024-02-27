//question2 Calculate the number of ways in which a person can climb n stairs if he can take exactly 1, 2 or 3 
//steps at each level

int findNumberOfWays(int n) {
if(n < 0) return 0;
if(n == 0)return 1;
return findNumberOfWays(n-1) + findNumberOfWays(n-2) + findNumberOfWays(n-3);
}
int main() {
int n;
cin >> n;
cout << findNumberOfWays(n) << endl;
return 0;
}