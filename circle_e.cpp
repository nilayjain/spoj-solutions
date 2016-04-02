#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdio>
using namespace std;

int main(){
	int t;
	cin >> t;
	for(;t>0;t--){
		double r1,r2,r3,r4;
		cin >> r1 >> r2 >> r3;
		r4 = 1/(1/r1 + 1/r2 + 1/r3 + 2*sqrt(1/(r1*r2) + 1/(r2*r3) + 1/(r1*r3)));
		printf("%.6lf\n",r4);
	}
	return 0;
}
