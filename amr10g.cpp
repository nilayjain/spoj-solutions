#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#define MAX 20000
using namespace std;
int main(){
	int t;
	cin >> t;
	for(;t>0;t--){
		int n,k;
		cin >> n >> k;
		vector<int> kids(n);
		for(int i = 0; i < n; i++) cin >> kids[i];
		if(k==1){ cout << "0" << endl; continue;}
		sort(kids.begin(), kids.end());
		long long int sum = 1000000000;
		for(int i=0;i<=n-k;i++) {
				if(sum > kids[i+k-1] - kids[i]) sum = kids[i+k-1] -kids[i];
		}
		cout << sum << endl;
	}
	return 0;
}
