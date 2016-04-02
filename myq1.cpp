#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(;t>0;t--){
		int n;
		cin >> n;
		if(n==1){
			cout << "poor conductor" << endl;
			continue;
		}
		int o = n% 10;
		int r = (n-1)/5;
		if((n-1)%5!=0) r++;
			if(o ==2) {cout << r << " W L" << endl;}
			if(o ==3) {cout << r << " A L" << endl;}
			if(o ==4) {cout << r << " A R" << endl;}
			if(o ==5) {cout << r << " M R" << endl;}
			if(o ==6) {cout << r << " W R" << endl;}
			
			if(o ==1) {cout << r << " W L" << endl;}
			if(o ==0) {cout << r << " A L" << endl;}
			if(o ==9) {cout << r << " A R" << endl;}
			if(o ==8) {cout << r << " M R" << endl;}
			if(o ==7) {cout << r << " W R" << endl;}
		}
	return 0;
}
