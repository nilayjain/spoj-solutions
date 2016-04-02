#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(;t>0;t--){
		long long int n;
		cin >> n;
		long long int res = ((3*n+1)*n)/2;
		cout << res%1000007 << endl;
	}
	return 0;
}
