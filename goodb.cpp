#include<iostream>
#include<cmath>
#include<vector>
#define rep(i,n) for(int i=1; i<=n; i++)
using namespace std;
//typedef vector < vector<int> > matrix;
const int MOD=1000000007;
const int K=1;
typedef long long int ll;
/*
matrix mul(matrix A, matrix B){
	matrix C(K+1,vector<int> (K+1));
	rep(i,K) rep(j,K) rep(k,K)
		C[i][j] = (C[i][j] + A[i][k]*B[k][j]) % MOD;
	return C;
}
*/
ll pow(ll A, int p){
	if(p==1) return (A%MOD);
	if(p%2) return (A * pow(A,p-1))%MOD;
	ll X = pow(A,p/2);
	return (X*X)%MOD;
}


ll fact(int n){
	ll F1= 1;
	if(n==0 || n==1) return 1; 
	ll T = n-1;
	T = pow(T,n-1);
	return T%MOD;
}

int main(){
	int n,w,t,r;
	
	cin >> n>>w>>t >>r;
	//ll x = ( fact(n)/( fact(w) * fact(t) * fact(r) ) ) %MOD;
	ll x = fact(n);
	cout << x << endl;
	return 0;
}
