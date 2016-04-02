#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t;
	cin >> t;
	int l,u,i;
	for(;t>0;t--){
		cin >> l >> u;
		if(u>=2147483643) u = 2147483643;
		bool a[u+1];
		for(i=0;i<u+1;i++) a[i] = 1;
		i=2;
		a[0] = a[1] = 0;
		while(i<u+1){
			int j = 2;
			if(a[i] == 1){
				while(i*j<u+1){
					a[i*j] = 0;
					j++;
				}
			}
			i++;
		}
		for(i=0;i<u+1;i++) if(a[i]==1) cout << i << endl;
}
	return 0;
}
			
