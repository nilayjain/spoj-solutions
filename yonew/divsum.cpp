#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(;t>0;t--){
		int s;
		int sum=1;
		cin >> s;
		if(s==1) { cout << 0 << endl; continue;}		
		int k = sqrt(s);
		int i =2;
		while(i<=k){
			if(s%i==0){
				if(i==sqrt(s)) sum+=i;
				else sum = sum + i + s/i;
			}
			i++;
		}
		cout << sum;
		cout << endl;
	}
	return 0;
}
