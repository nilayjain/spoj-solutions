#include<iostream>
using namespace std;
int main(){	
	int q;
	cin >> q;
	bool a[30000];
	int i;
	for(i=0;i<=30000;i++) a[q] = false;
	int count = 0;
	for(;q>0;q--){
		int p;
		cin >> p;
		if(!a[p-1] && !a[p+1]){ a[p] = true; count++;}
		else if(a[p-1] && a[p+1]) {a[p] = true; count--;}
		else a[p] = true;
		cout << count << endl;
	}
	cout << "Justice" << endl;
}
