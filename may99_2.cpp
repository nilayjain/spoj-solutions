#include<iostream>
using namespace std;
typedef unsigned long long int ll;

void recu(ll n){
	if(n==0) return;
	else{
		int k = n%5;
		if(k==0) recu((n-1)/5);
		else recu(n/5);
		switch(k){
			case 1: cout<<"m"; break;
			case 2: cout<<"a"; break;
			case 3: cout<<"n"; break;
			case 4: cout<<"k"; break;
			case 0: cout<<"u"; break;
			default: cout<<"fuck"; 
		}
	}
	return;
}

int main(){
	int t;
	cin >> t;
	for(;t>0;t--){
		ll n;
		cin >> n;
		recu(n);
		cout<< endl;
	}
	return 0;
}
