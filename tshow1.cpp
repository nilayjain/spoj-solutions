#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<utility>
typedef unsigned long long int ll;
using namespace std;

void recu(ll k){
	if(k==0) return;
	if(k ==1 || k==2) {cout << k+4; return;}
	else{
		if(k%2){
			recu((k-1)/2);
			cout << "5";
		}
		else{
			recu((k-2)/2);
			cout << "6";
		}
	}
	return;
}

int main(){
	int N;
	cin >> N;
	for(; N>0;N--){
		ll k;
		cin >> k;
		recu(k);
		cout << endl;
	}
	return 0;
}


