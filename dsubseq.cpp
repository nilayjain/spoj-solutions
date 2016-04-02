#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<string>
#include<utility>
#include<cstring>
#define MOD 1000000007
#define MAX 100001
using namespace std;

map<char,int> m;
int dp[MAX];
char seq[MAX];
int main(){
	int t;
	cin >> t;
	for(;t>0;t--){	
		string str;
		cin >> str;
		int length = str.length();
		strcpy(seq, str.c_str());
		dp[0] = 1; dp[1] = 2; m[seq[0]] = 1;
		for(int i = 2; i <= length; i++){
			dp[i] = (dp[i-1]*2)%MOD;
			if(m.find(seq[i-1])!=m.end()){
				dp[i] = (dp[i] - dp[m[seq[i-1]]-1]+MOD)%MOD;
			}
			m[seq[i-1]] = i;
		}
		cout << dp[length] << endl;
		m.clear();
	}
	return 0;
}
