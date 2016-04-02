#include<iostream>
using namespace std;
int main(){
	double a,b;
	cin >> a >> b;
	double d = (1/((1/a)+(1/b)))*60;
	cout<<d;
	return 0;
}
