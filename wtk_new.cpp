#include<iostream>

using namespace std;
int jos(int n, int k);
int main(){
	int t;
	cin >> t;
	for(;t>0;t--){
		int n;
		cin >> n;
		int x = jos(n,1);
		cout << x << endl;
	}
	return 0;
}

int jos(int n, int k){
	if(n==1) return 1;
	else return (jos(n-1,k+1) +k-1)%n+1;
}
