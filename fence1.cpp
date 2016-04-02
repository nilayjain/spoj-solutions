#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	double l;
	while(true){
		cin >> l;
		if(l==0) break;
		double ans = (l*l)/(2*3.1415926);
		cout << setprecision(2) << ans << endl;
	}
	return 0;
}
