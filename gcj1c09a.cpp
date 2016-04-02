#include<iostream>
#include<string>
#include<cstring>
#include<map>
#include<algorithm>
#include<utility>
#include<vector>
#include<cmath>
#define rep(i,n) for(int i = 1; i<=n; i++)
typedef unsigned long long int ll;
typedef unsigned int uint;
using namespace std;
ll power(uint a, uint b){
	if(b==0) return 1;
	if(b==1) return a;
	if(b%2) return a*power(a,b-1);
	ll x = power(a,b/2);
	return x*x;
}

int main(){
	int t;
	cin >>t;
	rep(i,t){
		string str;
		cin >> str;
		uint val = 1;
		uint count = 1;
		ll ans = 0;
		int flag = 0;
		string::iterator it = str.begin();
		map<char,uint> m;
		m[*it] = 1; it++;
		if(str.length()>=2){
			for(; it<str.end(); it++){
				if(m.find(*it)==m.end()){
					if(flag==0){
						m[*it] = 0;
						count++;
						flag=1;
						val++;
						continue;
					}
					m[*it] = count;
					count++;
				}
				val++;
			}
			val--;
			if(count==1) count++;
			for(it=str.begin();it<str.end();it++){
				uint x = m.find(*it)->second;
			//	cout << x;
				ans+= x * power(count,val);
				val--;
			}
			cout << "Case #" << i << ": " << ans << endl;
		}
		else {cout << "Case #" << i << ": 1" << endl;}
		m.clear();
	}
	return 0;
}
