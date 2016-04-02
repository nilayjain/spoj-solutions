#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<map>
#define L 25000001
#define rep(i,n) for(int i=1;i<=n;i++)
using namespace std;

int main(){
	int t;
	cin >> t;
	for(;t>0;t--){
		int e,f;
		cin >> e >> f;
		int capacity = f-e+1
		int n;
		cin >> n;
		int p[n+1],w[n+1];
		rep(i,n) cin >> p[i] >> w[i];
		int dp[n+1][capacity];
		rep(i,n) rep(j,capacity) dp[i][j] = L;
		rep(i,capacity) 
			if(i%w[1]==0) dp[1][i]= (i/w[1])*p[1];
		for(i=2;i<=n;i++){
			rep(j,capacity){
				dp[i][j] = 	
