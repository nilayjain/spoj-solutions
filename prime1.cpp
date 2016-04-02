#include<iostream>
#include<cmath>
using namespace std;
int isPrime(int n){
	if(n<=1) return 0;
	if(n==2) return 1;
	if(n%2==0) return 0;
	int i;
	int j = sqrt(n);
	for(i=3;i<=j;i+=2) if(n%i==0) return 0;
	return 1;
}
int main(){
	int t;
	cin >> t;
	for(;t>0;t--){
		int m,n;
		cin >> m >> n;
		int i;
		for(i=m;i<=n;i++){
			if(isPrime(i)) cout << i << endl;
		}
		cout << endl;
	}
	return 0;
}	
