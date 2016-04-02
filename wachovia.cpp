#include<iostream>
#include<vector>
#include<algorithm>
#define rep(i,n) for(int i = 1; i<=n; i++)

using namespace std;

typedef vector< vector<int> > matrix;

int max(int a, int b){ return a>b?a:b;}
/*
int recu(matrix& m, vector<int>& a, vector<int>& w, int i , int j){
	if(m[i][j]!=-1) return m[i][j];
	else if(i==0 || j==0) m[i][j] = 0;
	else{
		if(j<w[i]) m[i][j] = recu(m,a,w,i-1,j);
		else m[i][j] = max(recu(m,a,w,i-1,j),recu(m,a,w,i,j-w[i])+a[i]);
	}
	return m[i][j];
}
*/
int main(){
	int n;
	cin >> n;
	rep(z,n){
		int W,A;
		cin >> W >> A;
		matrix m(A+1,vector<int> (W+1,0));
		vector<int> a(A+1);
		vector<int> w(A+1);
		rep(i,A) cin >> w[i] >> a[i];
		rep(i,A){
			rep(j,W){	
				if(j<w[i]) m[i][j] = m[i][j-1];
				else m[i][j] = max(m[i-1][j],m[i][j-w[i]]+a[i]);
			}
		}
		cout<< m[A][W] << endl;	
	}
	return 0;
}
