#include<iostream>
using namespace std;

long long int max(long long int a, long long int b){	
	return a>=b?a:b;
}

int main(){
	int s,n;
	cin >> s >> n;
	long long int arr[n+1][s+1];
	int i =0;
	int j = 0;
	int v[n+1];
	int w[s+1];
	for(i=0; i <= s;i++) arr[0][i] = 0;
	for(i=1;i<=n;i++){
		cin >> w[i];
		cin >> v[i];
	}
	for(i=1;i<=n;i++){
		for(j=0;j<=s;j++){
			if(w[i]>j) arr[i][j] = arr[i-1][j];
			else arr[i][j] = max(arr[i-1][j],v[i]+arr[i-1][j-w[i]]);
		}
	}
	cout << arr[n][s] << endl;
	return 0;
}
