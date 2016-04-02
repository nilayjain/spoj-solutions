#include<iostream>
using namespace std;
int gcd(int a, int b);

int gcd (int a, int b){
	if(b==0) return a;
	else return gcd(b,a%b);
}

int main(){
	int q;
	cin >> q;
	for(;q>0;q--){
		int n,m;
		cin >> n >> m;
		int i,flag;
		int count = 1;
		if(m==0 && n==1) { cout << "1" << endl; continue;}
		if(m==0 || m==1) {cout << m << endl; continue;}
		if(gcd(n,2)==1) {flag = 1; count++;}
		i=3;
		while(i<=m){
			if(gcd(n,i)==1) count++;
			if(flag==1) i++;
			else i+=2;
		}
		cout << count << endl;
	}
	return 0;
}
			
