#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	int t;
	cin >> t;
	int i;
	for(i=1;i<=t;i++){
		double d,v;
		cin >> d >> v;
		if(v*v < d*9.806) {cout << "Scenario #" << i << ": " << "-1" << endl; continue;}
		double deg = 1/2.0*(asin(d*9.806/(v*v)))*180.0/3.14159265;
		cout << "Scenario #" << i << ": "  << setprecision(2) << fixed << deg << endl; 
	}
	return 0;
}
