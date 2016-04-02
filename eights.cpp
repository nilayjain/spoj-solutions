#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin >> n ;
	for(;n>0;n--){
		long long int k;
		cin >> k;
		long long int result=0;
		long long int s = (k-1)/4;
		s*=1000;
		if(k%4==1) result = 192;
		else if(k%4==2) result = 442;
		else if(k%4==3) result = 692;
		else result = 942;
		result+=s;
		cout << result << endl;
	}
	return 0;
}
