#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int g,b,ans;
	while(true){
		cin >> g >> b;
		if(g==-1 && b==-1) return 0;
		if(g>b) ans = (g+b)/(b+1);
		else ans = (g+b)/(g+1);
		cout << ans << endl;
	}
	return 0;
}
