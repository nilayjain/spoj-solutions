#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	int T;
	cin >> T;
	for(int i = 1; i<=T;i++){
		double p0,p1,p;
		double t;
		cin >> p0 >> p1 >> t >> p;
		double x = t*(log(p/p0)/log(p1/p0));
		cout << "Scenario #" << i << ": ";
		cout << setprecision(2) << fixed << x << endl;
	}
	return 0;
}
