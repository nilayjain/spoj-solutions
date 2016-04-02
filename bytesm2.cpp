#include<iostream>
#include<vector>
#include<algorithm>
#define MAX 101
#define rep(i,n) for(int i = 1; i<=n;i++)
using namespace std;
typedef vector<int> vi;
typedef vector< vi > vvi;
int m[MAX][MAX];
int dp[MAX][MAX];

int max2(int a, int b){
	if(a>b) return a;
	else return b;
}

int max3(int a, int b, int c){
	if(a>b && a>c) return a;
	else if(c>=a && c>b) return c;
	else return b;
}
int main(){
	int t;
	cin >> t;
	for(;t>0;t--){
		int rows, cols;
		cin >> rows >> cols;
		rep(i,rows)
			rep(j,cols) cin >> m[i][j];
		rep(j,cols) dp[1][j] = m[1][j];
		for(int i = 2; i<=rows; i++){
			rep(j,cols){
				if(j!=cols && j!=1) dp[i][j] = m[i][j] + max3(dp[i-1][j-1],dp[i-1][j],dp[i-1][j+1]);
				else if(j==cols) dp[i][j] = m[i][j] + max2(dp[i-1][j],dp[i-1][j-1]);
				else if(j==1) dp[i][j] = m[i][j] + max2(dp[i-1][j],dp[i-1][j+1]);
			}
		}
		int max = 0;
		rep(i,cols) { if(dp[rows][i] > max) max = dp[rows][i];} 
		cout << max << endl;
	/*	rep(i,rows){
			rep(j,cols) cout << dp[i][j] << " ";
			cout << endl;
		}*/
	}
	return 0;
}
		
