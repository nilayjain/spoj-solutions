#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>

using namespace std;
typedef long long int ll;

int modular(int b, ll e, int m){
	int r = 1;
	b = b%m;
	while(e>0){
		if(e%2) r = (r*b)%m;
		e = e>>1;
		b = (b*b)%m;
	}
	return r;
}

int main(){
	int t;
	cin >> t;
	string a;
	ll b;
	for(;t>0;t--){
		cin >> a;
		cin >> b;
		string:: reverse_iterator it = a.rbegin();
		int x = (*it - '0');
		if(x==0 || x==1) cout<< x << endl;
		else cout << modular(x,b,10)<<endl;
	}
	return 0;
}	
