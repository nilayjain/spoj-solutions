#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>

using namespace std;

int main(){
	int n = 400000;
	vector<int> v(n);
	for(int i=0;i<n;i++) v[i] = i;
	long long int sum = 0;
	for(int i=0; i<n; i++) sum+=v[i];
	cout << sum << endl;
	return 0;
}
