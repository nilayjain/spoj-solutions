#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(;t>0;t--){
		int x,y,z;
		cin >> x >> y >> z;
		if(z > x && z > y) {cout<<"NO"<<endl; continue;}
		if(x>y){int temp = y; y = x; x = temp;}
		int a,b;
		a=1;
		long long int k = z + a * x;
		b = k/y + 1;
		long long int l = b*y;
		long long int m = (b+1)*y;
		l = l-z;
		m = m-z;
		if(l%x==0 || m%x==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
