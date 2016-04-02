#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(;t>0;t--){
		cout << endl;
		int n;
		cin >> n;
		long long int sum = 0;
		long long int c=0;
		int i;
		for(i=0;i<n;i++){
			cin >> c;
			sum+=c%n;
		}
		if(sum%n==0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
