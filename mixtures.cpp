#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<utility>
#define rep(i,n) for(int i =1;i<=n;i++)
#define MOD 100
using namespace std;

typedef vector<vector<int> > matrix;
/*
int recu(matrix& smoke, matrix& temp, vector<int>& v, int i, int j){
	if(smoke[i][j]!=-1) return smoke[i][j];
	if(i>j) return -1;
	else if(i==j) {smoke[i][j] = 0; temp[i][j] = v[i]; return smoke[i][j];}
	else if(j-i==1){ smoke[i][j] = v[i]*v[j]; temp[i][j] = (v[i]+v[j])%MOD; return smoke[i][j];}
	else{
		smoke[i][j] = 10000000;
		for(int k=i;k<=j;k++){
			int q = smoke[i][k]+smoke[k+1][j]+temp[i][k]*temp[k+1][j];
			if(q<smoke[i][j]){
				smoke[i][j] = q;
				temp[i][j] = (temp[i][k]+temp[k+1][j])%MOD;
			}
		}
		return smoke[i][j];
	}
}
*/
int main(){
	int n;
	while(cin >> n){
		vector<int> v(n+1);
		rep(i,n) cin >> v[i];	
		matrix smoke(n+1,vector<int> (n+1, -1));
		matrix temp(n+1,vector<int> (n+1, -1));
		rep(i,n-1) {
			smoke[i][i] = 0; 
			smoke[i][i+1] = v[i]*v[i+1]; 
			temp[i][i] = v[i]; 
			temp[i][i+1] = (v[i] + v[i+1])%MOD;
		}
		smoke[n][n]  = 0; temp[n][n] = v[n];
		int l;
		for(int l = 2; l<=n-1; l++){
			for(int i=1; i+l<=n; i++){
				int j = l+i;
				smoke[i][j] = 10000000;
				for(int k=i; k<=j-1;k++){
					int q = smoke[i][k]+smoke[k+1][j]+temp[i][k]*temp[k+1][j];
					if(q<smoke[i][j]){
						smoke[i][j] = q;
						temp[i][j] = (temp[i][k]+temp[k+1][j])%MOD;
					}
				}
			}
		}
		cout << smoke[1][n] << endl;
	}
	return 0;
}
