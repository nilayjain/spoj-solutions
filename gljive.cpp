#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t=0;
	int a[10];
	for(;t<10;t++) cin >> a[t];
	int sum = 0;
	int i = 0;
	for(i=0;i<10;i++){
		sum+=a[i];
		if(sum > 100){
			if(sum-100 <= 100-(sum-a[i])) cout << sum << endl;
			else cout << sum-a[i] << endl;
			return 0;
		}
	}
	cout << sum << endl;
	return 0;
}	
