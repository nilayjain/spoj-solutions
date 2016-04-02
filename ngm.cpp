#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	if(n==0){cout<<"1"<<endl; cout<<"0"<<endl;}	
	else if(n%10==0) cout<<"2"<<endl;
	else{
		cout<<"1"<<endl;
		cout<<n%10<<endl;
	}
	return 0;
}
