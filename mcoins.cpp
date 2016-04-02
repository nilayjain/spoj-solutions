#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;
typedef vector<int> vi;
#define MAXV 1000001
#define for_each(it,container) \
	for(typeof(container.begin()) it = container.begin; it!=container.end(); it++)
bool dp[MAXV];
//bool done[MAXV];
void init(int k , int l){
	for(int i =0;i<MAXV; i++) { dp[i] = false;}
	dp[1] = dp[k] = dp[l] = true;
}
/*
bool recu(int x, int k , int l){	
	if(x<=0) return false;
	if(done[x]) return dp[x];
	if(!recu(x-1,k,l) || !recu(x-k,k,l) || !recu(x-l,k,l)) { done[x] = dp[x] = true;}
	else {done[x] = true; dp[x] = false;}
	return dp[x];
}
*/
int main(){
	int k, l , m,x;
	cin >> k >> l >> m;
	if(m==0) cout << "B";
	for(;m>0;m--){
		cin >> x; 
		init(k,l);
		for(int i = 2; i <= x; i++){
			if(i==k || i==l) continue;
			int b = i-k; int c = i-l;
			if(!dp[i-1]||(b>0 && !dp[i-k]) || (c>0 && !dp[i-l])) dp[i] = true;
			else dp[i] = false;
		}		
		if(dp[x]) cout << "A";
		else cout << "B";
	}
	cout << endl;
	return 0;
}			
