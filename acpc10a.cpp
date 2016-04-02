#include<iostream>
using namespace std;
int main(){
	int a1=1,a2=1,a3=1;
	while(!(a1==0 && a2==0 && a3==0)){
		cin >> a1 >> a2 >> a3;
		if(a1==0&&a2==0&&a3==0) break;
		if(2*a2 == a3 + a1) cout << "AP " << a3+a3-a2 << endl;
		if(a2*a2 == a3*a1) cout << "GP " << a3*a3/a2 << endl;
	}
	return 0;
}
