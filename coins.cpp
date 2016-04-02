#include<iostream>
#include<algorithm>
#include<utility>
#include<map>
using namespace std;

map<int, long long> dp;
long long coin(int n);

int main(){
	int n;
	while(cin>>n){
		cout << coin(n) << endl;
	}
	return 0;
}

long long coin(int n){
	if(n==0) return 0;
	if(dp[n]!=0) return dp[n];
	long long aux = coin(n/2)+coin(n/3)+coin(n/4);
	if(aux> n) dp[n] = aux;
	else dp[n] = n;
	return dp[n];
}
