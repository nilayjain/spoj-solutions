#include<iostream>
#include<cmath>
using namespace std;

int mod_pow(int b, int e, int m){
	int result = 1;
	b = b%m;
	while(e > 0){
		if(e%2==1) result = (result*b)%m;
		e = e >> 1;
		b = (b*b)%m;
	}
	return result;
}

int main(){
	int t;
	cin >> t;
	for(;t>0;t--){
		int a, b;
		cin >> a >> b;
		if(a>10)  a-=10;
		if(b==0){
			cout << "1" << endl;
			continue;
		}
		if(b==1){
			cout << a%10 << endl;
			continue;
		}
		if(a==0||a==5||a==6||a==10){
			cout << a%10 << endl;
			continue;
		}
		int result = mod_pow(a,b,10);
		cout << result << endl;
	}
	return 0;
}	
