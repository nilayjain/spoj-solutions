#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<cmath>
#define rep(i,n) for(i=1;i<=n;i++)
using namespace std;

typedef long long ll;
typedef vector< vector<ll> > matrix;
const int K = 2;
const ll MOD = 1000000007;

matrix mul(matrix A, matrix B){
	matrix C(K+1, vector<ll>(K+1));
	int i,j,k;
	rep(i,K) rep(j,K) rep(k,K)
		C[i][j] = (C[i][j] + A[i][k]*B[k][j]) % MOD ;
	return C;
}

matrix pow(matrix A, int n){
	if(n==1) return A;
	if(n%2) return mul(A,pow(A, n-1));
	matrix X = pow(A, n/2);
	return mul(X,X);
}

ll fib(int n){
	vector<ll> F1 (K+1);
	F1[1] = 1; F1[2] = 1;
	matrix T(K+1, vector<ll> (K+1));
	T[1][1] = 0; T[1][2] = 1;
	T[2][1] = 1; T[2][2] = 1;
	
	if(n==0) return 0;	
	if(n==1) return 1;
	
	T = pow(T, n-1);
	ll res = 0;
	int i;
	rep(i,K) res = (res + T[1][i]*F1[i] ) % MOD;
	return res;
}

int main(){
	int t;
	cin >> t;
	for(;t>0;t--){
		int n,m;
		cin >> n >> m;
		cout << (fib(m+2)-fib(n+1)+MOD)%MOD << endl;
	}
	return 0;
}
