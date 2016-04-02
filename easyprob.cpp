#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
void func(int val){
	if(val==0) return;
	if(val==1) {cout <<"2(0)"; return;}
	else if(val == 2) {cout << "2"; return;}
	else if(val == 3) {cout << "2+2(0)"; return;}

	int x = log2(val);
	val = val-pow(2,x);
	cout<<"2(";
	func(x);
	cout<<")";
	if(val!=0){cout<<"+";func(val);}
	return;
}

int main(){
	cout<<"137=";
	func(137);
	cout << endl;
	cout<<"1315=";
	func(1315);
	cout << endl;
	cout<<"73=";
	func(73);
	cout << endl;
	cout<<"136=";
	func(136);
	cout << endl;
	cout<<"255=";
	func(255);
	cout << endl;
	cout<<"1384=";
	func(1384);
	cout << endl;
	cout<<"16385=";
	func(16385);	
	return 0;
}
		
				
