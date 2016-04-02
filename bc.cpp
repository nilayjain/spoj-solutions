#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
typedef long long int ll;

ll func(double n){
	ll x = 0;
	while(n>1){
		n/=2;
		x++;
	}
	return x;
}

int main(){
	int t;
	cin >> t;
	for(int i = 1; i<=t; i++){
		double n,m,k;
		cin >> n >> m >> k;
		ll hand = (n*m)*k-1;
		ll knife = 0;
		knife = func(n)+func(m)+func(k);
		cout << "Case #" << i << ": " << hand << " " << knife << endl;
	}
	return 0;
}
