#include<bits/stdc++.h>

using namespace std;

int lca(vector<int>& parent , int v , int w){
	while(v!=w){
		if(v < w) w = parent[w];
		else if(w < v) v = parent[v];
		else break;
	}
	return v;
}

int main(){
	int t;
	cin >> t;
	for(int z = 1; z<=t; z++){
		int n;
		cin >>n;
		vector<int> parent(n+1);
		for(int i=1; i<= n ; i++){
			int m;
			cin >> m;
			for(int j=1; j<=m; j++){
				int t;
				cin >> t;
				parent[t] = i;
			}
		}
		parent[1] = 1;
		int q;
		cin >> q;
		for(int i = 1; i<=q; i++){
			int v, w;
			cin >> v >> w;
			if(i==1) cout << "Case " << z << ":" << endl;
			cout << lca(parent, v, w) << endl;
		}
	}
	return 0;
}
