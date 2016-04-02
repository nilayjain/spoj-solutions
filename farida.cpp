#include<iostream>
#include<vector>
#include<algorithm>

#define rep(i,n) for(int i=1;i<=n;i++)
typedef long long int ll;
using namespace std;

ll max(ll a, ll b){
	return a>b?a:b;
}

int main(){
	int t;
	cin >> t;
	rep(i,t){
		int n;
		cin >> n;
		vector<ll> v(n+1);
		rep(j,n) cin >> v[j];
		//vector<ll> ans(n+1);
		//ans[0] = 0; ans[1] = v[1];
		int k;
		for(k=2;k<n+1;k++)
			v[k] = max(v[k]+v[k-2],v[k-1]);
		cout << "Case " << i << ": " << v[n] << endl;
	}
	return 0;
}
			
