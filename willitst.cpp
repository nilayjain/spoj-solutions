#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long int n;
	cin >> n;
	if(n==0 || n==1) cout<<"NIE"<<endl;
	else{	
	while(n>=2){
		if(n%2==0) n/=2;
		else {cout<<"NIE"<<endl; break;}
	}
	if(n==1) cout<<"TAK"<<endl;
	}	
	return 0;
}	
