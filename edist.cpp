#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>

using namespace std;
char A[2005];
char B[2005];
int dp[2005][2005];

int min(int a, int b, int c){
	if(a<=b && a<=c) return a;
	else if(b<a && b<=c) return b;
	else return c;
}
int main(){
	int t;
	cin >> t;
	for(;t>0;t--){
		cin >> A;
		cin >> B;
		int len_a = strlen(A);
		int len_b = strlen(B);
		int flag;
		for(int i=0;i<=len_a;i++) dp[i][0] = i;
		for(int i=0;i<=len_b;i++) dp[0][i] = i;
		for(int i=1;i<=len_a;i++){
			for(int j=1;j<=len_b;j++){
				if(A[i-1]==B[j-1]) flag = 0;
				else flag=1;
				dp[i][j] = min(dp[i-1][j-1]+flag,dp[i][j-1]+1,dp[i-1][j]+1);
			}
		}
		cout << dp[len_a][len_b] << endl;
	}
	return 0;
}
